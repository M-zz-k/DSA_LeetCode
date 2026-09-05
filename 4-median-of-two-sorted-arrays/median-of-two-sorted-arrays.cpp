#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Ensure nums1 is the smaller vector to achieve O(log(min(m, n)))
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int totalLeft = (m + n + 1) / 2;
        
        int low = 0;
        int high = m;
        
        while (low <= high) {
            int partition1 = low + (high - low) / 2;
            int partition2 = totalLeft - partition1;
            
            // Handle edge cases where partitions are at the beginning or end of the arrays
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];
            
            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];
            
            // Correct partition condition found
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // If the total number of elements is odd
                if ((m + n) % 2 == 1) {
                    return std::max(maxLeft1, maxLeft2);
                }
                // If the total number of elements is even
                else {
                    return (std::max(maxLeft1, maxLeft2) + std::min(minRight1, minRight2)) / 2.0;
                }
            }
            // Move left in nums1
            else if (maxLeft1 > minRight2) {
                high = partition1 - 1;
            }
            // Move right in nums1
            else {
                low = partition1 + 1;
            }
        }
        
        return 0.0;
    }
};
