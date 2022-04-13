class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        const int size = nums.size();
        if (size == 0) {
            return 0;
        }
        int length = 1;
        for (int i = 1; i < size; ++i) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } else {
                ++length;
                nums[length - 1] = nums[i];
            }
        }
        return length;
    }
};