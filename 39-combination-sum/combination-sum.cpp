class Solution {
public:
    void combination_backtrack(int index,vector<int>& candidates,int target,int current_sum,vector<int>&current_combo,vector<vector<int>>& result){
        if(current_sum == target){
            result.push_back(current_combo);
            return;
        }
        if(index == candidates.size() || current_sum > target){
            return;
        }
        current_combo.push_back(candidates[index]);

        combination_backtrack(index,candidates,target,current_sum + candidates[index],current_combo,result);

        current_combo.pop_back();

        combination_backtrack(index + 1,candidates,target,current_sum,current_combo,result);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current_combo;
        combination_backtrack(0,candidates,target,0,current_combo,result);
        return result;
    }
};