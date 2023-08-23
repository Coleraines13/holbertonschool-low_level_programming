#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Return -1 for a NULL array
    }

    for (size_t i = 0; i < size; ++i) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return (int)i;  // Return the index where value is located
        }
    }

    return -1;  // Return -1 if value is not found
}