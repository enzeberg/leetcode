class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
    void quicksort(vector<int>& nums, int l, int r) {
        if (l >= r) return;
        int pivot = nums[l];
        int i = l;
        int j = r + 1;
        while (true) {
            while (nums[++i] < pivot && i < r);
            while (nums[--j] > pivot && j > l);
            if (i >= j) break;
            swap(nums[i], nums[j]);
        }
        swap(nums[l], nums[j]);
        quicksort(nums, l, j - 1);
        quicksort(nums, j + 1, r);
    }
};