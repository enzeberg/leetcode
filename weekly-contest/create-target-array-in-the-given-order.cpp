class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int size = nums.size();
        vector<int> target;
        for (int i = 0; i < size; ++i) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};