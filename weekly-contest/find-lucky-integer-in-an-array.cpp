class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> times(501);
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            ++times[arr[i]];
        }
        int lucky = -1;
        for (int i = 1; i < 501; ++i) {
            int ele = times[i];
            if (ele > 0 && ele == i) {
                if (ele > lucky) {
                    lucky = ele;
                }
            }
        }
        return lucky;
    }
};