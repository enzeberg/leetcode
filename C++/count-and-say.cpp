class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string str = "1";
        for (int i = 2; i <= n; ++i) {
            string newStr = "";
            int strSize = str.size();
            char theChar = str[0];
            int count = 1;
            for (int j = 1; j < strSize; ++j) {
                if (str[j] == theChar) {
                    ++count;
                } else {
                    newStr += to_string(count);
                    newStr += theChar;
                    theChar = str[j];
                    count = 1;
                }
            }
            newStr += to_string(count);
            newStr += theChar;
            str = newStr;
        }
        return str;
    }
};