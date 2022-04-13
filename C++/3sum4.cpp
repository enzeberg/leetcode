// It works.
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        const int size = nums.size();
        if (size > 2 && nums[0] <= 0 && nums[size - 1] >= 0) {
            for (int l = 0; l < size - 2;) {
                if (nums[l] > 0) break;
                int m = l + 1;
                int r = size - 1;
                do {
                    int sum = nums[l] + nums[m] + nums[r];
                    if (sum == 0) {
                        vector<int> triple;
                        triple.push_back(nums[l]);
                        triple.push_back(nums[m]);
                        triple.push_back(nums[r]);
                        v.push_back(triple);
                    }
                    if (sum < 0) {
                        while (nums[m] == nums[++m] && m < r);
                    } else {
                        while (nums[r] == nums[--r] && r > m);
                    }
                    
                } while (r > m);

                while (nums[l] == nums[++l] && l < size - 2);
            }
        }
        
        return v;
    }
};