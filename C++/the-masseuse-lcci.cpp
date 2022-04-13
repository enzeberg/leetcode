class Solution {
public:
    int massage(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        int dpRefuse = 0;
        int dpAccept = nums[0];
        for (int i = 1; i < n; ++i) {
            int refuse = max(dpRefuse, dpAccept);
            int accept = dpRefuse + nums[i];
            dpRefuse = refuse;
            dpAccept = accept;
        }
        return max(dpRefuse, dpAccept);
    }
};