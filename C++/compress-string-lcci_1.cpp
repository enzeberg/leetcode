class Solution {
public:
    string compressString(string S) {
        int size = S.size();
        if (size < 3) {
            return S;
        }
        string compressed = "";
        char c = S[0];
        int count = 1;
        int i = 1;
        // S[size] 不会报错，而是返回 false
        while (c) {
            while (i < size && S[i] == c) {
                ++i;
                ++count;
            }
            compressed += c;
            compressed += to_string(count);
            c = S[i];
            count = 1;
            ++i;
        }
        return compressed.size() < size ? compressed : S;
    }
};