class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int nr = grid.size();
        if (nr == 0) return 0;
        int nc = grid[0].size();
        int ans = 0;
        for (int i = 0; i < nr; ++i) {
            for (int j = 0; j < nc; ++j) {
                if (grid[i][j] == '1') {
                    ++ans;
                    dfs(grid, i, j);
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int nr = grid.size();
        int nc = grid[0].size();
        grid[i][j] = '0';
        if (i > 0 && grid[i - 1][j] == '1') dfs(grid, i - 1, j);
        if (i < nr - 1 && grid[i + 1][j] == '1') dfs(grid, i + 1, j);
        if (j > 0 && grid[i][j - 1] == '1') dfs(grid, i, j - 1);
        if (j < nc - 1 && grid[i][j + 1] == '1') dfs(grid, i, j + 1);
    }
};