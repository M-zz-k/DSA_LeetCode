class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        //Arrange every element in its index position skipping negative nos and 0
        for( int i = 0; i < n; i++){
            while((nums[i] >= 1) && (nums[i] <= n) && (nums[i] != nums[nums[i] - 1])){
                swap(nums[i],nums[nums[i] - 1]);
            }
        }
        //Find the element from arranged array
        for(int i = 0; i < n; i++){
            if(nums[i] != i + 1){
                return i+1;
            }
        }
        return n+1;
    }
};