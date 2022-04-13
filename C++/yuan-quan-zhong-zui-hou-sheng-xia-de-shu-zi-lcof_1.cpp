class Solution {
public:
    int lastRemaining(int n, int m) {
        int num = 0; // k = 1 时，剩下的数字就是 0
        for (int k = 2; k <= n ; ++k) {
            num = (num + m) % k;
        }
        return num;
    }
};