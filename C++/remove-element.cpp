class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int numsSize = nums.size();
        int len = numsSize;
        for (int i = numsSize - 1; i >= 0; --i) {
            if (nums[i] == val) {
                for (int j = i; j < len - 1; ++j) {
                    nums[j] = nums[j + 1];
                }
                --len;
            }
        }
        return len;
    }
};