class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // assumed_prefix = min(strs , key = length)
        // for char ch in strs {
        //     while not in strs(ch) startswith assumed_prefix Logic part
        if (strs.empty()) return "";

        string assumed_prefix = strs[0];
        for (const string& s: strs){
            if(s.length() < assumed_prefix.length()){
                assumed_prefix = s;
            }
        for (const string& s: strs){
            while (s.rfind(assumed_prefix ,0) != 0){
                assumed_prefix.pop_back();
            }
        }
        }return assumed_prefix;
        }
    
};