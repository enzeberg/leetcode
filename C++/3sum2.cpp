// 二分法，超时
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        const int size = nums.size();
        if (size > 2) {
            for (int l = 0; nums[l] <= 0 && l < size - 2;) {
                // if (l > 0 && nums[l] == nums[l - 1]) continue;
                for (int r = size - 1; nums[r] >= 0 && r - l > 1;) {
                    // if (r < size - 1 && nums[r] == nums[r + 1]) continue;

                    int m = (l + r) / 2;
                    int complement = 0 - nums[l] - nums[r];
                    
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
                            // while (nums[m] == nums[++m]);
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
                            // while (nums[m] == nums[--m]);
                        }
                    }

                    while (nums[r] == nums[--r] && r - l > 1);

                }

                while (nums[l] == nums[++l] && l < size - 2);
            }
        }
        
        return v;
    }
};