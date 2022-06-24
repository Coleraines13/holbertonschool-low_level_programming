#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - program startup
 * @name: char being evaluated
 * @f: function being evaluated
 *
 * Return (0)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
