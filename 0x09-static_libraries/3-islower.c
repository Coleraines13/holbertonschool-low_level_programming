#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: defined in main
 *
 * Return: 0-1
 */

int _islower(int c)
{
	int i;

	if (c >= 'a' && c <= 'Z')
	{
		i = 0;
	}
	else if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	return (i);
}
