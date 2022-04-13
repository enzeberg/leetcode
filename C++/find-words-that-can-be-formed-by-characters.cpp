class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int wordNum = words.size();
        int len = 0;
        string word;
        int wordLen;
        string charsCopy;
        for (int i = 0; i < wordNum; ++i) {
            word = words[i];
            wordLen = word.length();
            charsCopy = chars;
            int j;
            for (j = 0; j < wordLen; ++j) {
                int charsCopyLen = charsCopy.length();
                bool includedInChars = false;
                int k = 0;
                for (; k < charsCopyLen; ++k) {
                    if (charsCopy[k] == word[j]) {
                        charsCopy.erase(charsCopy.begin() + k);
                        includedInChars = true;
                        break;
                    }
                }
                if (!includedInChars) {
                    break;
                }
            }
            if (j >= wordLen) {
                len += wordLen;
            }
        }
        return len;
    }
};