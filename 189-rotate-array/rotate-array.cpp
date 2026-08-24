class Solution {
public:
    void rev(vector<int>& nums, int start, int end){
        int temp;
        while (start <= end){
            temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start = start + 1;
            end = end -1;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        rev(nums,0,nums.size()-1);
        rev(nums,0,k-1);
        rev(nums,k,nums.size()-1);
    }
};