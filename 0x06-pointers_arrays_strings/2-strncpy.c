#include "holberton.h"

/**
 * _strncpy - copys a string
 * @dest: the destination value
 * @scr: the sorce vaule
 * @n: the copy limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while ( i < n)
		dest[i++] = '\0';
	return (dest);
}

