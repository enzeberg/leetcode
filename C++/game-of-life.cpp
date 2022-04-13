class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> grid;
        for (int i = 0; i < m; ++i) {
            vector<int> line;
            for (int j = 0; j < n; ++j) {
                int lives = 0;
                int newCell = 0;
                if (i < m - 1) {
                    if (board[i + 1][j]) ++lives;
                }
                if (i > 0) {
                    if (board[i - 1][j]) ++lives;
                }
                if (j < n - 1) {
                    if (board[i][j + 1]) ++lives;
                }
                if (j > 0) {
                    if (board[i][j - 1]) ++lives;
                }
                if (i > 0 && j > 0) {
                    if (board[i - 1][j - 1]) ++lives;
                }
                if (i > 0 && j < n - 1) {
                    if (board[i - 1][j + 1]) ++lives;
                }
                if (i < m - 1 && j > 0) {
                    if (board[i + 1][j - 1]) ++lives;
                }
                if (i < m - 1 && j < n - 1) {
                    if (board[i + 1][j + 1]) ++lives;
                }
                if (board[i][j]) {
                    if (lives == 2 || lives == 3) newCell = 1;
                } else {
                    if (lives == 3) newCell = 1;
                }
                line.emplace_back(newCell);
            }
            grid.emplace_back(line);
        }
        board = grid;
    }
};