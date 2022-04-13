// ±©Á¦·¨£¬³¬Ê±
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        const int size = nums.size();
        if (size > 2) {
            for (int i = 0; i < size - 2 && nums[i] <= 0; ++i) {
                if (i > 0 && nums[i] == nums[i - 1]) continue;
                for (int j = i + 1; j < size - 1; ++j) {
                    if (j - i > 1 && nums[j] == nums[j - 1]) continue;
                    for (int k = j + 1; k < size; ++k) {
                        if (nums[k] < 0 || (k - j > 1 && nums[k] == nums[k - 1]))
                            continue;
                        if (nums[i] + nums[j] + nums[k] == 0) {
                            vector<int> triple;
                            triple.push_back(nums[i]);
                            triple.push_back(nums[j]);
                            triple.push_back(nums[k]);
                            v.push_back(triple);
                        }
                    }
                }
            }
        }
        
        return v;
    }
};
