class Solution {
public:
    int movingCount(int m, int n, int k) {
        if (k == 0) return 1;
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        q.push(make_pair(0, 0));
        visited[0][0] = true;
        int ans = 1;
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            int i1 = i + 1;
            if (i1 < m && !visited[i1][j] && bit_sum(i1, j) <= k) {
                q.push(make_pair(i1, j));
                ++ans;
                visited[i1][j] = true;
            }

            int j1 = j + 1;
            if (j1 < n && !visited[i][j1] && bit_sum(i, j1) <= k) {
                q.push(make_pair(i, j1));
                ++ans;
                visited[i][j1] = true;
            }
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