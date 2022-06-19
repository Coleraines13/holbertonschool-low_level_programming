#include "main.h"
#include <stdio.h>

/**
 * _memcpy - this copies the memory area
 *
 * @dest: parameter defines in main pointer to memory area
 * @src: parameter defined in main pointer to another memory area
 * @n: parameter defined in main number of bytes to be copied from src
 *
 * Return: memory address of function
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *tmp = dest;

	for (i = 0; i < n; i++)
	{
		*dest + *src;
		dest++;
		src++;
	}
	dest = tmp;
	return (dest);
}
