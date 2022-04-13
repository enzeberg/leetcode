class Solution {
public:
    string addBinary(string a, string b) {
        int aSize = a.size();
        int bSize = b.size();
        int largeLen;
        int smallLen;
        string longStr;
        string shortStr;
        if (aSize <= bSize) {
            largeLen = bSize;
            smallLen = aSize;
            longStr = b;
            shortStr = a;
        } else {
            largeLen = aSize;
            smallLen = bSize;
            longStr = a;
            shortStr = b;
        }
        string s = "";
        bool carry = false;
        int i = 1;
        for (; i <= smallLen; ++i) {
            int longStrIndex = largeLen - i;
            int shortStrIndex = smallLen - i;
            char c;
            char c1 = longStr[longStrIndex];
            char c2 = shortStr[shortStrIndex];
            if (c1 == '1' && c2 == '1') {
                if (carry) {
                    c = '1';
                } else {
                    c = '0';
                }
                carry = true;
            } else if (c1 == '0' && c2 == '0') {
                if (carry) {
                    c = '1';
                } else {
                    c = '0';
                }
                carry = false;
            } else {
                if (carry) {
                    c = '0';
                    carry = true;
                } else {
                    c = '1';
                    carry = false;
                }
            }
            s = c + s;
        }
        i = largeLen - i;
        while (i >= 0 && carry) {
            char c;
            if (longStr[i] == '0') {
                c = '1';
                carry = false;
            } else {
                c = '0';
                carry = true;
            }
            s = c + s;
            --i;
        }
        while (i >= 0) {
            s = longStr[i] + s;
            --i;
        }
        if (carry) s = '1' + s;
        return s;
    }
};