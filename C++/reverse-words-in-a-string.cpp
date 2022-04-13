class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        int n = s.length();
        int i = 0;
        while (i < n) {
            if (s[i] != ' ') {
                // string word = s[i];
                string word = "";
                while (i < n && s[i] != ' ') {
                    word += s[i];
                    ++i;
                }
                words.push(word);
            }
            ++i;
        }
        string ans = "";
        while (words.size() > 1) {
            ans += words.top();
            ans += ' ';
            words.pop();
        }
        if (!words.empty()) {
            ans += words.top();
        }
        return ans;
    }
};