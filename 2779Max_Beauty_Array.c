#include <stdlib.h>

// Comparator function for sorting
int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int maximumBeauty(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), compare);

    int maxBeauty = 0;
    int left = 0;

    for (int right = 0; right < numsSize; right++) {
        // Check if the current window is valid
        while (nums[right] - nums[left] > 2 * k) {
            left++;
        }
        // Update maximum beauty
        int currentBeauty = right - left + 1;
        if (currentBeauty > maxBeauty) {
            maxBeauty = currentBeauty;
        }
    }

    return maxBeauty;
}
