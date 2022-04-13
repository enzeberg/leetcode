class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int rowSize = grid.size();
        int colSize = grid[0].size();
        vector<int> line;
        int area = 0;
        int num; // grid[i][j]

        for (int i = 0; i < rowSize; ++i) {
            line = grid[i];
            for (int j = 0; j < colSize; ++j) {
                num = line[j];
                if (num > 0) {
                    area += num * 4 + 2;
                    if (j > 0 && line[j - 1] > 0) {
                        area -= min(line[j - 1], num) * 2;
                    }
                    if (i > 0 && grid[i - 1][j] > 0) {
                        area -= min(grid[i - 1][j], num) * 2;
                    }
                }
            }
        }

        return area;
    }
};