class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        int previous1 = 0;
        int beforePrevious1 = 0;
        int previous2 = 0;
        int beforePrevious2 = 0;
        for (int i = 0; i < n - 1; ++i) {
            int current1 = max(previous1, beforePrevious1 + nums[i]);
            beforePrevious1 = previous1;
            previous1 = current1;

            int current2 = max(previous2, beforePrevious2 + nums[i + 1]);
            beforePrevious2 = previous2;
            previous2 = current2;
        }
        return max(previous1, previous2);
    }
};