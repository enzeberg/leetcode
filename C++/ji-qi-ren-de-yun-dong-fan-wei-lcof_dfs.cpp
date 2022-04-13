class Solution {
public:
    bool visited[100][100];
    int movingCount(int m, int n, int k) {
        return dfs(0, 0, m, n, k);
    }
    int dfs(int i, int j, int m, int n, int k) {
        if (i >= m || j >= n || bit_sum(i, j) > k || visited[i][j]) {
            return 0;
        }
        visited[i][j] = true;
        return 1 + dfs(i + 1, j, m, n, k) + dfs(i, j + 1, m, n, k);
    }
    int bit_sum(int i, int j) {
        int ans = 0;
        while (i > 0) {
            ans += i % 10;
            i /= 10;
        }
        while (j > 0) {
            ans += j % 10;
            j /= 10;
        }
        return ans;
    }
};