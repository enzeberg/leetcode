class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int num;
        for (int i = 0; i < size; ++i) {
            num  = nums[i];
            int j = 0;
            for (; j < size; ++j) {
                if (i != j && num == nums[j]) {
                    break;
                }
            }
            if (j >= size) {
                // return num;
                break;
            }
        }
        return num;
    }
};