#include "main.h"
#include <stdio.h>

/**
 * _puts - this prints a string to the standered output
 * @str: pointer with the address value
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
