#include <stdio.h>

/**
 * linear_search - Search for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
    {
        return (-1);  /* Return -1 for a NULL array */
    }

    for (i = 0; i < size; ++i)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        
        if (array[i] == value)
        {
            return (int)i;  /* Return the index where value is located */
        }
    }

    return (-1);  /* Return -1 if value is not found */
}