class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int result = nums[0];
        for (int i = 1; i < size; ++i) {
            result ^= nums[i];
        }
        return result;
    }
};