#include <string>
#include <algorithm>
#include <iostream>

class Solution {
private:
    // Helper function to expand outwards from a given centre
    int expandAroundCenter(const std::string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Return the length of the palindrome found
        return right - left - 1;
    }

public:
    std::string longestPalindrome(std::string s) {
        if (s.empty()) return "";
        
        int start = 0, end = 0;
        
        for (int i = 0; i < s.length(); i++) {
            // Case 1: Odd length palindrome (e.g., "aba")
            int len1 = expandAroundCenter(s, i, i);
            // Case 2: Even length palindrome (e.g., "abba")
            int len2 = expandAroundCenter(s, i, i + 1);
            
            // Take the maximum length found at this index
            int max_len = std::max(len1, len2);
            
            // If we found a longer palindrome, update our tracking indices
            if (max_len > (end - start + 1)) {
                start = i - (max_len - 1) / 2;
                end = i + max_len / 2;
            }
        }
        
        // return the substring starting from 'start' with a length of 'end - start + 1'
        return s.substr(start, end - start + 1);
    }
};
