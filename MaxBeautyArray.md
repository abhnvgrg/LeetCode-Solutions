The solution in the code file works only in the LeetCode Compiler. Here's the program to run anywhere

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int main() {
    int nums[] = {4, 6, 1, 2};
    int k = 2;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = maximumBeauty(nums, numsSize, k);
    printf("Maximum Possible Beauty: %d\n", result);

    return 0;
}


