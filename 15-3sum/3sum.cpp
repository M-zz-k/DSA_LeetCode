#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        int n = nums.size();
        
        // 1. Sort the array
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            // Target is positive; impossible to find two more numbers to sum to 0
            if (nums[i] > 0) break; 
            
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // 2. Initialize Two Pointers
            int start = i + 1;
            int end = n - 1;
            
            while (start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[start], nums[end]});
                    
                    // Skip duplicates for the second element
                    while (start < end && nums[start] == nums[start + 1]) start++;
                    // Skip duplicates for the third element
                    while (start < end && nums[end] == nums[end - 1]) end--;
                    
                    // Move both pointers inward
                    start++;
                    end--;
                } 
                else if (sum < 0) {
                    start++; // Make the sum larger
                } 
                else {
                    end--;   // Make the sum smaller
                }
            }
        }
        return result;
    }
};
