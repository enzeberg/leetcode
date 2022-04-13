class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int l = 0;
        int r = x / 2 + 1; // 4, 5 的返回值均是它们的一半，所以需要把一半包含进去
        int m;
        while (true) {
            m = (l + r) / 2;
            if (m == x / m) {
                return m;
            } else if (m < x / m) {
                if ((m + 1) > x / (m + 1)) return m;
                l = m;
            } else {
                if ((m - 1) < x / (m - 1)) return m - 1;
                r = m;
            }
        }
    }
};