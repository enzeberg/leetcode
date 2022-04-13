// œ»—° C Œª£¨Wrong Answer
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        const int size = nums.size();
        if (size > 2) {
            for (int m = 1; m < size - 1; ++m) {
                if (m > 1) {
                    if ((nums[m] == nums[m - 1] && nums[m] == nums[m - 2]) ||
                        (nums[m] == 0 && nums[m - 1] ==0 && nums[m + 1] != 0))
                        continue;
                }
                // if (m > 1 && nums[m] == nums[m - 1] && nums[m] == nums[m - 2])
                //     continue;
                int l = 0;
                int r = size - 1;
                do {
                    int sum = nums[l] + nums[m] + nums[r];
                    if (sum < 0) {
                        while (nums[l] == nums[++l] && l < m);
                    } else if (sum > 0) {
                        while (nums[r] == nums[--r] && r > m);
                    } else {
                        vector<int> triple;
                        triple.push_back(nums[l]);
                        triple.push_back(nums[m]);
                        triple.push_back(nums[r]);
                        v.push_back(triple);
                        ++l;
                        --r;
                    }
                } while (l < m && r > m && nums[l] <= 0 && nums[r] >= 0);
            }
        }
        
        return v;
    }
};