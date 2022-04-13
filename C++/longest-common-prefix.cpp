class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int strsSize = strs.size();
        if (strsSize == 0) {
            return "";
        } else if (strsSize == 1) {
            return strs[0];
        }
        string firstString = strs[0];
        int minLength = firstString.size();
        for (int i = 1; i < strsSize; ++i) {
            if (strs[i].size() < minLength)
                minLength = strs[i].size();
        }
        int i = 0;
        for (; i < minLength; ++i) {
            char c = firstString[i];
            for (int j = 1; j < strsSize; ++j) {
                if (strs[j][i] != c) return firstString.substr(0, i);
            }
        }
        return firstString.substr(0, i);
    }
};