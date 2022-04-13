class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int P[m];
        for (int i = 0; i < m; ++i) {
            P[i] = i + 1;
        }
        int n = queries.size();
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            int num = queries[i];
            int j = 0;
            for (; j < m; ++j) {
                if (P[j] == num) break;
            }
            ans.emplace_back(j);
            for (; j > 0; --j) {
                P[j] = P[j - 1];
            }
            P[0] = num;
        }
        return ans;
    }
};