class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int rowSize = grid.size();
        int colSize;
        vector<int> line;
        int area = 0;
        int num; // grid[i][j]

        // 第一行，除了第一个，剩下的都需要考虑与左边正方体的重叠
        line = grid[0];
        num = line[0];
        if (num > 0) {
            area += num * 4 + 2;
        }
        colSize = line.size();
        for (int j = 1; j < colSize; ++j) {
            num = line[j];
            if (num > 0) {
                area += num * 4 + 2 - min(line[j - 1], num) * 2;
            }
        }

        // 第一列，除了第一个，剩下的都需要考虑与上边正方体的重叠
        for (int i = 1; i < rowSize; ++i) {
            num = grid[i][0];
            if (num > 0) {
                area += num * 4 + 2 - min(grid[i - 1][0], num) * 2;
            }
        }

        // 除了第一行和第一列，剩下的都需要考虑与上边和下边的正方体的重叠
        for (int i = 1; i < rowSize; ++i) {
            line = grid[i];
            colSize = line.size();
            for (int j = 1; j < colSize; ++j) {
                num = line[j];
                if (num > 0) {
                    area += num * 4 + 2 - min(line[j - 1], num) * 2
                            - min(grid[i - 1][j], num) * 2;
                }
            }
        }

        return area;
    }
};