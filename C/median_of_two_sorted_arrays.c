

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int size = nums1Size + nums2Size;
    int *merged = (int *)malloc(sizeof(int) * size);
    int *p = merged;
    int *p1 = nums1;
    int *p2 = nums2;
    int *nums1Last = nums1 + nums1Size;
    int *nums2Last = nums2 + nums2Size;
    while (p1 < nums1Last && p2 < nums2Last) {
        *(p++) = *p1 <= *p2 ? *(p1++) : *(p2++);
    }
    while (p1 < nums1Last) {
        *(p++) = *(p1++);
    }
    while (p2 < nums2Last) {
        *(p++) = *(p2++);
    }
    int m = size / 2;
    if (size % 2 == 0) {
        return (double)(merged[m - 1] + merged[m]) / 2;
    } else {
        return merged[m];
    }
}

