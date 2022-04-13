class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int waterNum = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    ++waterNum;
                }
            }
        }
        if (waterNum == n * n || waterNum == 0) {
            return -1;
        }
        int turn = 0;
        while (waterNum > 0) {
            ++turn;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    int cell = grid[i][j];
                    if (cell == turn) {
                        int newLand = turn + 1;
                        if (j < n - 1 && grid[i][j + 1] == 0) {
                            grid[i][j + 1] = newLand;
                            --waterNum;
                        }
                        if (i < n - 1 && grid[i + 1][j] == 0) {
                            grid[i + 1][j] = newLand;
                            --waterNum;
                        }
                        if (j > 0 && grid[i][j - 1] == 0) {
                            grid[i][j - 1] = newLand;
                            --waterNum;
                        }
                        if (i > 0 && grid[i - 1][j] == 0) {
                            grid[i - 1][j] = newLand;
                            --waterNum;
                        }
                    }
                }
            }
        }
        return turn;
    }
};