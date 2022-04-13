class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        if (stones.size() == 1) return stones[0];
        int k;
        int i = 0;
        while (stones.size() > 1) {
            int previous = 1001;
            bool kFound = false;
            
            int j = i + 1;
            while (j != i) {
                if (stones[j] > stones[i] && stones[j] < previous) {
                    k = j;
                    kFound = true;
                    previous = stones[j];
                }
                if (j < stones.size() - 1) {
                    ++j;
                } else {
                    j = 0;
                }
            }
            if (!kFound) {
                k = stones.size() - 1;
            }
            if (stones[k] == stones[i]) {
                stones.erase(stones.begin() + i);
                stones.erase(stones.begin() + k - 1);
            } else {
                stones[i] = stones[k] - stones[i];
                stones.erase(stones.begin() + k);
            }

            if (i < stones.size() - 2) {
                ++i;
            } else {
                i = 0;
            }
        }
        
        if (stones.size() == 0) return 0;
        return stones[0];
    }
};