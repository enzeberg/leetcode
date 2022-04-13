class Solution {
public:
    string compressString(string S) {
        int size = S.size();
        if (size < 3) {
            return S;
        }
        string compressed = "";
        char c = S[0];
        int i = 0;
        int j;
        // S[size] 不会报错，而是返回 false
        while (c) {
            j = i + 1;
            while (j < size && S[j] == c) {
                ++j;
            }
            compressed += c;
            compressed += to_string(j - i);
            if (compressed.size() >= size) {
                return S;
            }
            i = j;
            c = S[i];
        }
        return compressed;
    }
};