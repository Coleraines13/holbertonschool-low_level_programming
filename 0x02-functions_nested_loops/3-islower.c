#include "main.h"

/**
 * _islower - checks to see if input charicter is lowercase
 * @c: Letter to be checked
 *
 * Return: 1 for lowercase, 0 for non-lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
