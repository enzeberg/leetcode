class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        if (n == 1) {
            return false;
        }
        vector<int> times(n);
        for (int i = 0; i < n; ++i) {
            ++times[deck[i]];
        }
        vector<int> meaningfulTimes;
        for (int ele: times) {
            if (ele > 0) {
                meaningfulTimes.emplace_back(ele);
            }
        }
        int n1 = meaningfulTimes.size();
        for (int x = 2; x <= n; ++x) {
            if (n % x == 0) {
                int i = 0;
                for (; i < n1; ++i) {
                    if (meaningfulTimes[i] % x != 0) {
                        break;
                    }
                }
                if (i >= n1) {
                    return true;
                }
            }
        }
        return false;
    }
};