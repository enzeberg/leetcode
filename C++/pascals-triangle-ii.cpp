class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle;

        vector<int> line0;
        line0.push_back(1);
        if (rowIndex == 0) {
            return line0;
        }
        triangle.push_back(line0);
        
        vector<int> line1;
        line1.push_back(1);
        line1.push_back(1);
        if (rowIndex == 1) {
            return line1;
        }
        triangle.push_back(line1);
        
        for (int i = 2; i <= rowIndex; ++i) {
            vector<int> line;
            line.push_back(1);
            for (int j = 1; j < i; ++j) {
                line.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }
            line.push_back(1);
            triangle.push_back(line);
        }
        return triangle[rowIndex];
    }
};