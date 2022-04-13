class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        if (m == 0 || n == 0) {
            return m + n;
        }
        int d[m + 1][n + 1];
        for (int i = 0; i <= m; ++i) {
            d[i][0] = i;
        }
        for (int j = 0; j <= n; ++j) {
            d[0][j] = j;
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                int d1 = d[i][j - 1] + 1;
                int d2 = d[i - 1][j] + 1;
                int d3 = d[i - 1][j - 1];
                if (word1[i - 1] != word2[j - 1]) {
                    ++d3;
                }
                d[i][j] = min(d1, min(d2, d3));
            }
        }
        return d[m][n];
    }
};