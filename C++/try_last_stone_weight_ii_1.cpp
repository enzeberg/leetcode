class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {       
        // int size = stones.size();
        // if (size == 1) return stones[0];
        
        sort(stones.begin(), stones.end());
        while (stones.size() > 1) {
            int k = 1;
            int previous = stones[1] - stones[0];
            for (int i = 2; i < stones.size(); ++i) {
                if (stones[i] - stones[i - 1] > previous) {
                    k = i;
                    previous = stones[i] - stones[i - 1];
                }
                
            }
            if (previous == 0) {
                stones.erase(stones.begin() + k);
                stones.erase(stones.begin() + k - 1);
            } else {
                stones[k - 1] = previous;
                stones.erase(stones.begin() + k);
            }
            
            sort(stones.begin(), stones.end());

        }
        if (stones.size() == 0) return 0;
        return stones[0];
    }
};