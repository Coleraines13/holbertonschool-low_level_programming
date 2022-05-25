#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main Entry - point
 *Return: Always 0 (Success)
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%i is positive ", n, (n % 10));

	if ((n% 10) == 0)
	{
		printf("0\n");
	}
	else if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("-98 is negative 0\n");
	}

	return (0);
}
