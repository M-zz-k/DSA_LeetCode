#include <climits>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_profit = INT_MAX;
        for (int i = 0; i < prices.size(); i++){
            if (prices[i] < min_profit){
                min_profit = prices[i];
            }
            if (prices[i]-min_profit > max_profit){
                max_profit = prices[i] - min_profit;
            }
        
        }return max_profit;
    }
};