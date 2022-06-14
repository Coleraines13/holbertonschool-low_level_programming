#include "main.h"
#include <stdio.h>

/**
 * _strcpy - this copies the string pointed to by src
 *
 * @dest: defined in main
 * @src: defined in main
 *
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (tmp);
	
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
