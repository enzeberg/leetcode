class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        if (numRows == 0) {
            return triangle;
        }
        
        vector<int> line0;
        line0.push_back(1);
        triangle.push_back(line0);
        if (numRows == 1) {
            return triangle;
        }

        vector<int> line1;
        line1.push_back(1);
        line1.push_back(1);
        triangle.push_back(line1);
        if (numRows == 2) {
            return triangle;
        }

        for (int i = 2; i < numRows; ++i) {
            vector<int> line;
            line.push_back(1);
            for (int j = 1; j < i; ++j) {
                line.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }
            line.push_back(1);
            triangle.push_back(line);
        }
        return triangle;
    }
};