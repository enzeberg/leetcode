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
        while (i < size) {
            while (i < size && S[i] == c) {
                ++i;
                ++count;
            }
            compressed += c;
            compressed += to_string(count);
            if (i < size) {
                c = S[i];
                count = 1;
                ++i;
            }
        }
        if (count == 1) {
            compressed += c;
            compressed += to_string(1);
        }
        return compressed.size() < size ? compressed : S;
    }
};