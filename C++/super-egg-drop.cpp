class Solution {
    unordered_map<int, int> memo;
    int dp(int K, int N) {
        if (K == 1) return N;
        if (N == 0) return 0;
        int key = N * 100 + K;
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }
        int ans = N;
        int low = 1, high = N;
        while (low <= high) {
            int mid = (low + high) / 2;
            int broken = dp(K - 1, mid - 1);
            int not_broken = dp(K, N - mid);
            if (broken > not_broken) {
                high = mid - 1;
                ans = min(ans, broken + 1);
            } else {
                low = mid + 1;
                ans = min(ans, not_broken + 1);
            }
        }
        memo[key] = ans;
        return ans;
    }
public:
    int superEggDrop(int K, int N) {
        return dp(K, N);
    }
};