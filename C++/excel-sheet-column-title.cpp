class Solution {
public:
    string convertToTitle(int n) {
        string title = "";
        while (n > 0) {
            --n;
            char c = n % 26 + 'A';
            title = c + title;
            n /= 26;
        }
        return title;
    }
};