class Solution {
    static bool cmp(string s1, string s2) {
        return s1.length() > s2.length();
    }
public:
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        int n = words.size();
        vector<string> ans;
        vector<bool> emplaced(n, false);
        for (int i = 0; i < n - 1; ++i) {
            string s = words[i];
            for (int j = i + 1; j < n; ++j) {
                if (s.find(words[j]) != string::npos && !emplaced[j]) {
                    ans.emplace_back(words[j]);
                    emplaced[j] = true;
                }
            }
        }
        return ans;
    }
};