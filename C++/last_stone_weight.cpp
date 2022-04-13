class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {       
        int size = stones.size();
        if (size == 1) return stones[0];
        int num = 0;
        sort(stones.begin(), stones.end());
        while (num < size ) {
            int r = size - 1, l = size - 2;
            if (stones[l] == 0) break;
            if (stones[r] == stones[l]) {
                stones[r] = 0;
                stones[l] = 0;
                num += 2;
            } else {
                stones[r] -= stones[l];
                stones[l] = 0;
                num++;
            }
            sort(stones.begin(), stones.end());

        }
        return stones[size - 1];
    }
};