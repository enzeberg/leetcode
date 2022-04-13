class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            bool shouldContinue = false;
            for (int j = n - 1; j > i; --j) {
                if (nums[j] < nums[j - 1]) {
                    // int temp = nums[j];
                    // nums[j] = nums[j - 1];
                    // nums[j - 1] = temp;
                    swap(nums[j - 1], nums[j]);
                    shouldContinue = true;
                }
            }
            if (!shouldContinue) {
                break;
            }
        }
        return nums;
    }
    // time out
};