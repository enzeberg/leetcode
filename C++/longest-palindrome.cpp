class Solution {
public:
    int longestPalindrome(string s) {
        int length = s.length();
        if (length == 0) {
            return 0;
        }
        vector<int> visitedIndexes;
        int result = 0;
        for (int i = 0; i < length - 1; ++i) {
            int size = visitedIndexes.size();
            int j = 0;
            for (; j < size; ++j) {
                if (visitedIndexes[j] == i) {
                    break;
                }
            }
            if (j >= size) {
                int count = 1; // 相同字母的数量，初值为1代表已有 s[i]
                for (int k = i + 1; k < length; ++k) {
                    if (s[k] == s[i]) {
                        visitedIndexes.push_back(k);
                        ++count;
                    }
                }
                if (count > 1) {
                    result += count % 2 == 0 ? count : count - 1;
                }
            }
        }
        return result == length ? result : result + 1;
    }
};