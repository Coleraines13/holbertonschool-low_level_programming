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
	int t;
	char *positive = "and is greater than 5\n";
	char *negative = "and is less than 8 and not 0\n";
	char *zero = "and is 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;

	printf("Last digit of %d is %d", n, t);
	printf("%s", t == 0 ? zero : t > 5 ? greaterfive : lesssix);
	
	return (0);
}
