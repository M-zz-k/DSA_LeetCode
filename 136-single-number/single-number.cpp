#include <unordered_set>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_set <int> seen;
       for (int num : nums){
           if ((seen.count(num)) > 0){ // check if a number appears more than once
            seen.erase(num);           // if that number is present then delete from set
            
           }else{
           seen.insert(num);} //if not then insert it into the set
       } return *seen.begin(); // the only number in the set if the non duplicate number
    }
};