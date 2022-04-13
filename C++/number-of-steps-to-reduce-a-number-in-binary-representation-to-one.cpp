class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int i = s.length() - 1;
        bool carry = false; // 进位
        while (i > 0) {
            if (s[i] == '1') {
                if (carry) {
                    --i; // 该位变成 0 后整体右移
                    ++steps; // 1 个 step
                } else {
                    carry = true; // 该位 +1，变成0
                    --i; // 变成 0 后整体右移
                    steps += 2; // 2 个 step
                }
            } else {
                if (carry) {
                    // 没有“加一”或“右移”操作
                    s[i] = '1';
                    carry = false;
                } else {
                    --i; // 右移
                    ++steps;
                }
            }
        }
        if (carry) {
            ++steps; // 最左位变成 0 后整体右移，1 个 step
        }
        return steps;
    }
};