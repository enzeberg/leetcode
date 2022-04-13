class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> minNums(k, 0);
        sort(arr.begin(), arr.end());
        for (int i = 0; i < k; ++i) {
            // minNums.push_back(arr[i]);
            minNums[i] = arr[i];
        }
        return minNums;
    }
};