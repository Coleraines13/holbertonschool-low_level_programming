#include <unistd.h>

/**
 * using putchar writes the character 0
 * @c: The character to print
 *
 * Return: on (Success) 1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
