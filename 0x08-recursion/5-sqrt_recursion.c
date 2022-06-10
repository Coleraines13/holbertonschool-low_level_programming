#include "main.h"
/**
 * _pow_recursion - finds x to the power of y
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: on success 1
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - return the natural square root of n
 * @n: number integer
 * return: on success 1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
