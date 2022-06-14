#include "main.h"

/**
 * _isaplha - checks for a lowercase character
 *
 * @c: defined in main
 *
 * Return: 0
 */

int _isaplha(int c)
{
	int i;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
