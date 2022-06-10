#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: input string
 * Return: on success 1
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
