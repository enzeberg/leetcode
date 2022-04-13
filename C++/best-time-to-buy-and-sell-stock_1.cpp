class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if (size == 0 || size == 1) {
            return 0;
        }
        int profit = 0;
        int lastBuyPrice = prices[0];
        int buy = 0;
        int buyPrice, sell, p;

        while (buy < size - 1) {
            // 价格递减时，找到最低价买入
            while (buy < size - 2 && prices[buy] >= prices[buy + 1]) {
                ++buy;
            }
            buyPrice = prices[buy];
            if (buyPrice <= lastBuyPrice) {
                sell = buy + 1;
                int i = sell + 1;
                while (i < size) {
                    if (prices[i] > prices[sell]) {
                        sell = i;
                    }
                    ++i;
                }
                p = prices[sell] - buyPrice;
                if (p > profit) {
                    profit = p;
                    lastBuyPrice = buyPrice;
                }
            }
            
            ++buy;
        }
        
        return profit;
    }
};