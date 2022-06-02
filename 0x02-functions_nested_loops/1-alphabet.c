#include "main.h"

/**
 * prints the alpha best 1 time
 * this write the alphabet a to z
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
