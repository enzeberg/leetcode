class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int size = prices.size();
        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (prices[j] > prices[i]) {
                    int p = prices[j] - prices[i];
                    if (p > profit) {
                        profit = p;
                    }
                }
            }
        }
        return profit;
    }
};