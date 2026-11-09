class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        
        long long guess = x / 2;
        while (guess * guess > x) {
            guess = (guess + x / guess) / 2; // Correct Newton's Method formula
        }
        return guess;
    }
};
