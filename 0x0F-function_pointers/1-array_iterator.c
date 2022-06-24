#include "functions_pointers.h"

/**
 *
 * @array: int beuing evaluated
 * @size: type being evaluated
 * @action: function being evaluated
 *
 * Return: (0)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
