class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        int n = s.length();
        int i = 0;
        string word = "";
        while (i < n) {
            if (s[i] == ' ') {
                if (word.length() > 0) {
                    words.push(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
            ++i;
        }
        if (word.length() > 0) {
            words.push(word);
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