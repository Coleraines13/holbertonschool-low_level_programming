#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Return -1 for a NULL array
    }

    int left = 0;
    int right = (int)size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        printf("Searching in array: ");
        for (int i = left; i <= right; ++i) {
            printf("%d", array[i]);
            if (i != right) {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;  // Return the index where value is located
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // Return -1 if value is not found
}