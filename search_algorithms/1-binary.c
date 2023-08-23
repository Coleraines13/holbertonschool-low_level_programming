#include <stdio.h>

/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
    int left, right, mid, i;

    if (array == NULL)
    {
        return (-1);  /* Return -1 for a NULL array */
    }

    left = 0;
    right = (int)size - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        printf("Searching in array: ");
        
        for (i = left; i <= right; ++i)
        {
            printf("%d", array[i]);
            if (i != right)
            {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;  /* Return the index where value is located */
        }
        else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return (-1);  /* Return -1 if value is not found */
}