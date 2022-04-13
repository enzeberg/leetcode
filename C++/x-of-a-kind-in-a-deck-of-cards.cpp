class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        if (n == 1) {
            return false;
        }
        sort(deck.begin(), deck.end());
        int x = 2;
        while (x <= n) {
            if (n % x == 0) {
                int i = 0;
                while (i < n) {
                    int integer = deck[i];
                    int j = i + 1;
                    int nextI = i + x;
                    for (; j < nextI; ++j) {
                        if (deck[j] != integer) {
                            break;
                        }
                    }
                    if (j < nextI) {
                        break;
                    }
                    i = nextI;
                }
                if (i >= n) {
                    return true;
                }
            }
            ++x;
        }
        return false;
    }
};