#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times from a to z
 *
 * Return: void
 */

void print_aplhabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
		_putchar('\n');
		i++;
	}
}
