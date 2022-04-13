// ½â´ð´íÎó
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        const int size = nums.size();
        if (size > 2) {
            int l = 0;
            int r = size - 1;
            while (r - l > 1) {
                if (nums[l] > 0 || nums[r] < 0) break;
                
                int complement = 0 - nums[l] - nums[r];
                int m = (l + r) / 2;
                
                if (nums[m] == complement) {
                    vector<int> triple;
                    triple.push_back(nums[l]);
                    triple.push_back(nums[m]);
                    triple.push_back(nums[r]);
                    v.push_back(triple);
                } else if (nums[m] < complement) {
                    while (m < r) {
                        if (nums[m] == complement) {
                            vector<int> triple;
                            triple.push_back(nums[l]);
                            triple.push_back(nums[m]);
                            triple.push_back(nums[r]);
                            v.push_back(triple);
                            break;
                        }
                        ++m;
                    }
                } else {
                    while (m > l) {
                        if (nums[m] == complement) {
                            vector<int> triple;
                            triple.push_back(nums[l]);
                            triple.push_back(nums[m]);
                            triple.push_back(nums[r]);
                            v.push_back(triple);
                            break;
                        }
                        --m;
                    }
                }

                if (nums[m] < 0) {
                    --r;
                } else if (nums[m] > 0) {
                    ++l;
                } else {
                    if (m < (double)((l + r) / 2)) {
                        --r;
                    } else if (m > (double)((l + r) / 2)) {
                        ++l;
                    } else {
                        ++l;
                        --r;
                    }
                }
                while (l > 0 && nums[l] == nums[l - 1] && r - l > 1) {
                    ++l;
                }
                while (r < size - 1 && nums[r] == nums[r + 1] && r - l > 1) {
                    --r;
                }

            }
        }
        
        return v;
    }
};