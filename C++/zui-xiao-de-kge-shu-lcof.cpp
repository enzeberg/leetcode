class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> minNums(k, 0);
        if (k == 0) {
            return minNums;
        }
        int size = arr.size();
        int i;
        for (i = 0; i < k; ++i) {
            // minNums.push_back(arr[i]);
            minNums[i] = arr[i];
        }
        for(; i < size; ++i) {
            int num = arr[i];
            int indexOfMax = 0;
            for (int j = 0; j < k; ++j) {
                if (minNums[j] > minNums[indexOfMax]) {
                    indexOfMax = j;
                }
            }
            if (minNums[indexOfMax] > num) {
                minNums[indexOfMax] = num;
            }
        }
        return minNums;
    }
};