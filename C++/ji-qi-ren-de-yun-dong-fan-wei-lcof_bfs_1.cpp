class Solution {
public:
    int movingCount(int m, int n, int k) {
        if (k == 0) return 1;
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        q.push(make_pair(0, 0));
        int ans = 0;
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();
            if (i >= m || j >= n || visited[i][j] || bit_sum(i, j) > k) {
                continue;
            }
            ++ans;
            q.push(make_pair(i + 1, j));
            q.push(make_pair(i, j + 1));
            visited[i][j] = true;
        }
        return ans;
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