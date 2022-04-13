void bubbleSort(int *nums, int size) {
    bool swapped = false;
    int last = size - 1;
    for (int i = 0; i < last; ++i) {
        swapped = false;
        for (int j = last; j > i; --j) {
            if (nums[j - 1] > nums[j]) {
                swapped = true;
                int temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
        if (!swapped) return;
    }
}