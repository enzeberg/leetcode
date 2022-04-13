class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int threshold = floor(n / 2);
        unordered_map<int, bool> visited;
        for (int i = 0; i < n; ++i) {
            int num = nums[i];
            if (visited.find(num) == visited.end()) {
                int count = 1;
                visited[num] = true;
                for (int j = i + 1; j < n; ++j) {
                    if (nums[j] == num) {
                        ++count;
                    }
                }
                if (count > threshold) {
                    return num;
                }
            }
        }
        return 0;
    }
};