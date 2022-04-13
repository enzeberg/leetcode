class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if (z == 0 || z == x || z == y) {
            return true;
        }
        int sum = x + y;
        if (sum < z) {
            return false;
        } else if (sum == z) {
            return true;
        } else {
            if (x == y) {
                return false; // 两个水壶一样，就相当于是一个水壶
            }
            if (x % 2 == 0 && y % 2 == 0) { // 两个偶数，只能获得偶数升
                return z % 2 == 0;
            }
            int difference = y - x;
            if (difference < 0) {
                difference = -difference;
            }
            if (x % difference != 0 && y % difference != 0) {
                return true;
            }
            return z % x == 0 || z % y == 0 || z % difference == 0;
        }

    }
};