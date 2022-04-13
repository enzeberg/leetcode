class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                for (int ii = m; ii > i; --ii) {
                    nums1[ii] = nums1[ii - 1];
                }
                nums1[i] = nums2[j];
                ++j;
                ++m;
            }
            ++i;
        }
        if (j < n) {
            for (; j < n; ++j) {
                nums1[i++] = nums2[j];
            }
        }
    }
};