#include "main.h"
#include <stdio.h>

/**
 * _strcat - this concatenates two strings
 *
 * @dest: parameter defined in main
 * @src: parameter defined in main
 *
 * Return: memory address of function
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest++ = '\0';
	dest = tmp;
	return (dest);
}
