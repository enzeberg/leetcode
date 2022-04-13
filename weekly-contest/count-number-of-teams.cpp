class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int result = 0;
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if ((rating[j] > rating[i] && rating[k] > rating[j])
                        || (rating[j] < rating[i] && rating[k] < rating[j])) {
                        ++result;
                    }
                }
            }
        }
        return result;
    }
};