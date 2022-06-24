#include "function_pointers.h"

/**
 *
 * @array: first int being evaluated
 * @size: second int being evaluated
 * @cmp: function being evaluated
 *
 * Return: (0)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int string;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (string = 0; string < size; string ++)
	{
		if (cmp(array[string]) != 0)
		{
			return (string);
		}
	}
	return (-1);
}
