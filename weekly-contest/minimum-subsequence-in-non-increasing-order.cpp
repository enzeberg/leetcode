class Solution {
    static bool cmp(int a, int b) {
        return a > b;
    }
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        int n = nums.size();
        if (n == 1) return nums;
        int sum = 0;
        int i = 0;
        for (; i < n - 1; ++i) {
            sum += nums[i];
            int sum1 = 0;
            int j = i + 1;
            for (; j < n; ++j) {
                sum1 += nums[j];
                if (sum1 >= sum) {
                    break;
                }
            }
            if (j >= n) {
                break;
            }
        }
        vector<int> ans(nums.begin(), nums.begin() + i + 1);
        return ans;
    }
};