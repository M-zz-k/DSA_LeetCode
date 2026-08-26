#include <unordered_set>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set <int> s1;
    unordered_set <int> s2;

    for (int num : nums1){
        s1.insert(num);
    }
    for (int num : nums2){
        s2.insert(num);
    }
    int k = 0;
    vector<int> res;

    for (int num : s1){
        if(s2.contains(num)){
            res.push_back(num);
        } k++;
    }return res;
    }
};