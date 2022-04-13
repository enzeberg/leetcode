void bubbleSort(int *nums, int size)
{
    bool swapped = false;
    int last = size - 1;
    for (int i = 0; i < last; ++i)
    {
        swapped = false;
        for (int j = last; j > i; --j)
        {
            if (nums[j - 1] > nums[j])
            {
                swapped = true;
                int temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
        if (!swapped)
            return;
    }
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int a = (int **)malloc(sizeof(int *) + sizeof(int) * numsSize / 3);
    bubbleSort(nums, numsSize);
    for (int i = 0; i < numsSize - 2 && nums[i] <= 0; ++i) {
        for (int j = i + 1; j < numsSize - 1; ++j) {
            for (int k = j + 1; k < numsSize; ++k) {
                if (nums[k] < 0) continue;
                if (nums[i] + nums[j] + nums[k] == 0) {

                }
            }
        }
    }
}

