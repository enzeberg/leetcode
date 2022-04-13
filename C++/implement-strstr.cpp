class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        int needleSize = needle.size();
        int lastIndex = haystack.size() - needleSize;
        for (int i = 0; i <= lastIndex; ++i) {
            if (haystack[i] == needle[0] &&
                haystack.substr(i, needleSize) == needle)
                return i;
        }
        return -1;
    }
};