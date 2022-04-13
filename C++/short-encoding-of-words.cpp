class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string> wordSet(words.begin(), words.end());
        for (string word: words) {
            int len = word.length();
            for (int i = 1; i < len; ++i) {
                wordSet.erase(word.substr(i));
            }
        }
        int result = 0;
        for (string word: wordSet) {
            result += word.length() + 1;
        }
        return result;
    }
};