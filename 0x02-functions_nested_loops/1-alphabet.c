#include "main.h"

/**
 * print_alphabet - prints alphabet 1 time from a to z
 *
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
