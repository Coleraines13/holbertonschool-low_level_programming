#include "main.h"
#include <stdio.h>

/**
 * _strlen - this returns the lenght of a string
 * @s: pointer with the address
 *
 * Return: void
 */
int_strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
