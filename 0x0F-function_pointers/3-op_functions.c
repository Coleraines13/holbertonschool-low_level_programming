#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - program startup
 * @a: first int being evaled
 * @b: second int being evaled
 *
 * Return: (0)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - program startup
 * @a: first int being evaled
 * @b: second int being evaled
 *
 * Return: (0)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - program startup
 * @a: firs int being evaled
 * @b: second int being evaled
 *
 * Return: (0)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - program startup
 * @a: first int being evaled
 * @b: second int being evaled
 *
 * Return: (0)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - program startup
 * @a: first int being evaled
 * @b: second int being evaled
 *
 * Return: (0)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
