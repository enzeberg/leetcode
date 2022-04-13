class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        for (int i = 1; i < n - 1; ++i) {
            int max_left = 0, max_right = 0;
            for (int j = i - 1; j >= 0; --j) {
                if (height[j] > max_left)
                    max_left = height[j];
            }
            for (int j = i + 1; j < n; ++j) {
                if (height[j] > max_right)
                    max_right = height[j];
            }
            int lower = min(max_left, max_right);
            if (lower > height[i])
                ans += lower - height[i];
        }
        return ans;
    }
};