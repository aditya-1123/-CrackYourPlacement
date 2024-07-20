// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy_price = prices[0];

        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {

            if(prices[i] < buy_price) {
                buy_price = prices[i];
            }            
            else {

                int curr_profit = prices[i] - buy_price;
                profit = max(profit, curr_profit);
            }
        }
        return profit;
    }
};
