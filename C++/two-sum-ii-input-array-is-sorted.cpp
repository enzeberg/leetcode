class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indexes;
        int l = 0;
        int r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum < target) {
                ++l;
            } else if (sum > target) {
                --r;
            } else {
                indexes.emplace_back(l + 1);
                indexes.emplace_back(r + 1);
                break;
            }
        }
        return indexes;
    }
};