class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        int needleSize = needle.size();
        int lastIndex = haystack.size() - needleSize;
        for (int i = 0; i <= lastIndex; ++i) {
            if (haystack[i] == needle[0]) {
                int j = 1;
                for (; j < needleSize; ++j) {
                    if (haystack[i + j] != needle[j])
                        break;
                }
                if (j >= needleSize)
                    return i;
            }
        }
        return -1;
    }
};