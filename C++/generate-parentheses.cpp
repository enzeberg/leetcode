class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        dfs("", n, n);
        return ans;
    }
    void dfs(string s, int l, int r) {
        if (l > 0) {
            dfs(s + "(", l - 1, r);
        }
        if (r > l) {
            dfs(s + ")", l, r - 1);
        }
        if (l == 0 && r == 0) {
            ans.emplace_back(s);
        }
    }
};