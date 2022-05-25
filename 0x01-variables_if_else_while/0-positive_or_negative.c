#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *positive = "positive\n";
	char *negative = "negative\n";
	char *zero = "zero\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;

	printf("%d is %s", n, n == 0 ? zero : n > 0 ? positive : negative);
	printf("%s", t == 0 ? zero : t > 5 ? greaterfive : lesssix);
	
	return (0);
}
