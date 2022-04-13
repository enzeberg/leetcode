class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int size = A.size();
        int occurences[40200] = {0}; // 数字出现次数数组
        for (int i = 0; i < size; ++i) {
            ++occurences[A[i]];
        }
        int result = 0;
        int redundantNums;
        for (int i = 0; i < 40200; ++i) {
            if (occurences[i] > 1) {
                redundantNums = occurences[i] - 1;
                result += redundantNums;
                occurences[i + 1] += redundantNums;
            }
        }
        return result;
    }
};