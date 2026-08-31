#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void backtrack(int index, vector<int>& candidates, int target, vector<int>& current_combo, vector<vector<int>>& result) {
        // Base Case: Target reached exactly
        if (target == 0) {
            result.push_back(current_combo);
            return;
        }

        for (int i = index; i < candidates.size(); ++i) {
            // Early Pruning: If the current number is too big, stop looking at this path entirely
            if (target - candidates[i] < 0) break; 

            current_combo.push_back(candidates[i]);
            // Recursion: Notice we pass 'i' as the next index, allowing the same number to be reused
            backtrack(i, candidates, target - candidates[i], current_combo, result); 
            current_combo.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current_combo;
        
        // Sorting allows us to stop the loop early (pruning)
        sort(candidates.begin(), candidates.end());
        
        backtrack(0, candidates, target, current_combo, result);
        return result;
    }
};
