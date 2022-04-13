class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // 这里的 = 拷贝是值拷贝，会得到一个新的数组
        auto rotated = matrix;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                rotated[j][n - 1 - i] = matrix[i][j];
            }
        }
        // also 值拷贝
        matrix = rotated;
    }
};