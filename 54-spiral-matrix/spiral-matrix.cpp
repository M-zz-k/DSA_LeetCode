class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int firstList = 0;
        int lastList = matrix.size() - 1;
        int start = 0;
        int end = matrix[0].size() - 1;
        vector<int> result;
        while ((firstList <= lastList) && (start <= end)){
            //Pushing the entire first element in the list(result)
            for(int i = start; i <= end; i++){
                result.push_back(matrix[firstList][i]);
            }
            //Traverse to the last element of each middle lists and push it to result
            for(int list = firstList + 1; list < lastList; list++){
                result.push_back(matrix[list][end]);
            }
            //Print entire last list (reverse order)
            if(firstList < lastList){
                for(int i = end; i >= start; i--){
                    result.push_back(matrix[lastList][i]);
                }
            }
            //Jump up through the middle lists and print their first number
            if(start < end){
                for(int list = lastList - 1;list > firstList; list--){
                    result.push_back(matrix[list][start]);
                }
            }
            start++;
            end--;
            firstList++;
            lastList--;
        }
    return result;
    }
};