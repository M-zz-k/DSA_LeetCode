#include <unordered_map>
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> freq_map;
        freq_map[0] = 1;
        int count = 0;
        int current_sum = 0;
        for(int num : nums){
            current_sum += num;
            int target = current_sum - k;
            if(freq_map.find(target) != freq_map.end()){
                count += freq_map[target];
            }
            freq_map[current_sum]++;
        }return count;
    }
};