#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from right to left
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1; // No carry needed, increment and return
                return digits;
            }
            // If the digit is 9, it becomes 0 and carry moves to the next digit
            digits[i] = 0;
        }
        
        // If the loop finished, all digits were 9 (e.g., 999 -> 000)
        // We need to insert a 1 at the beginning of the vector
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
