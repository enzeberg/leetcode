class Solution {
public:
    int superEggDrop(int K, int N) {
        vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));
        int T = 0;
        while (dp[K][T] < N) {
            ++T;
            for (int k = 1; k <= K; ++k) {
                dp[k][T] = dp[k - 1][T - 1] + dp[k][T - 1] + 1;
            }
        }
        return T;
    }
};