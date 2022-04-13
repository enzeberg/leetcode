class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int roocRow, roocCol;
        bool found = false;
        int result = 0;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (board[i][j] == 'R') {
                    roocRow = i;
                    roocCol = j;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        for (int i = roocRow; i >= 0; --i) {
            char c = board[i][roocCol];
            if (c == 'p') {
                ++result;
                break;
            } else if (c == 'B') {
                break;
            }
        }
        for (int i = roocRow; i < 8; ++i) {
            char c = board[i][roocCol];
            if (c == 'p') {
                ++result;
                break;
            } else if (c == 'B') {
                break;
            }
        }
        for (int j = roocCol; j >= 0; --j) {
            char c = board[roocRow][j];
            if (c == 'p') {
                ++result;
                break;
            } else if (c == 'B') {
                break;
            }
        }
        for (int j = roocCol; j < 8; ++j) {
            char c = board[roocRow][j];
            if (c == 'p') {
                ++result;
                break;
            } else if (c == 'B') {
                break;
            }
        }
        return result;
    }
};