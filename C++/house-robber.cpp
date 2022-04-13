class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        // f(i) = max(f(i-1), f(i-2) + nums[i])
        int previous = 0, beforePrevious = 0;
        for (int i = 0; i < n; ++i) {
            int current = max(previous, beforePrevious + nums[i]);
            beforePrevious = previous;
            previous = current;
        }
        return previous;
    }
};