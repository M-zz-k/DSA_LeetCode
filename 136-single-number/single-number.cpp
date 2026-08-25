#include <unordered_set>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_set <int> seen;
       for (int num : nums){
           if ((seen.count(num)) > 0){ // check if a number appears more than once
            seen.erase(num);           // if that number is present then delete from set
            
           }else{
           seen.insert(num);}
       } return *seen.begin();
    }
};