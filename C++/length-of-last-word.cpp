class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordEnd = s.size() - 1;
        while (s[lastWordEnd] == ' ') {
            --lastWordEnd;
        }
        if (lastWordEnd < 0) return 0;
        int len = 1;
        int i = lastWordEnd - 1;
        while (i >= 0 && s[i] != ' ') {
            ++len;
            --i;
        }
        return len;
    }
};