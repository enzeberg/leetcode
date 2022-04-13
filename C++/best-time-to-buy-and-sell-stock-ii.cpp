class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int size = prices.size();
        int buy = 0;
        int sell;
        while (buy < size - 1) {
            // 价格递减时，找到最低价买入
            while (buy < size - 2 && prices[buy] >= prices[buy + 1]) {
                ++buy;
            }
            sell = buy + 1;
            while (sell < size - 1 && prices[sell] <= prices[sell + 1]) {
                ++sell;
            }
            int p = prices[sell] - prices[buy];
            if (p > 0) {
                profit += p;
            }
            buy = sell + 1;
        }
        return profit;
    }
};