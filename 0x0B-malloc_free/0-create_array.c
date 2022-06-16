#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this creates an array of chars
 * and intiazies with a specific char
 *
 * @c: array of chars
 * @size: the size of the memory to print
 *
 * Return: address of memory to print
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pArray;

	if (size == 0)
		return (NULL);

	pArray = malloc(size * sizeof(char));

	if (pArray == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		pArray[i] = c;
		i++;
	}
	return (pArray);
}
