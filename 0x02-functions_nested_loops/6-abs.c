#include "main.h"

/**
 * _abs - Take the number and returns the absolute value of said number
 * @i: number to be check
 *
 * Return: absolute value of integer
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (0 - i);
	}
}
