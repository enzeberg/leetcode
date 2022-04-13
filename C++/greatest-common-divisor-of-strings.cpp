class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();
        int min, max;
        string shorter, longer;
        if (len1 <= len2) {
            min = len1;
            max = len2;
            shorter = str1;
            longer = str2;
        } else {
            min = len2;
            max = len1;
            shorter = str2;
            longer = str1;
        }
        
        int maxCommonDivisor = min;
        while (max % maxCommonDivisor != 0 || min % maxCommonDivisor != 0) {
            maxCommonDivisor--;
        }
        string s = shorter.substr(0, maxCommonDivisor);
        string temp = s;
        int times = min / maxCommonDivisor;
        while (times > 1) {
            temp += s;
            times--;
        }
        if (temp == shorter) {
            times = (max - min) / maxCommonDivisor;
            while (times >= 1) {
                temp += s;
                times--;
            }
            if (temp == longer) {
                return s;
            } else {
                return "";
            }
        } else {
            return "";
        }
    }
};