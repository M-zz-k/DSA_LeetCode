#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        // If needle is longer than haystack, it's impossible to find a match
        if (m > n) return -1;
        
        // Loop through all possible starting windows
        for (int i = 0; i <= n - m; ++i) {
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        
        return -1;
    }
};
