class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,1); //if array has 4 elements then result = {1,1,1,1}

        int left = 1;
        for(int i = 0; i < n;i++){
            result[i] = left;
            left = left*nums[i];
        }

        int right = 1;
        for(int i = n-1; i>=0; i--){
            result[i] = result[i]*right;
            right = right*nums[i];
        }

        return result;

    }
};