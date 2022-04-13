class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        int last = s.length() - 1;
        for (int i = last; i >= 0; --i) {
            ans += (s[i] - 64) * pow(26, last - i);
        }
        return ans;
    }
};