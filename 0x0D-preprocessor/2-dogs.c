#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		char *positive = "positive";
		char *negative = "negative";
		char *zero = "zero";

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is %s", n, n ==0 ? &zero : n > 0 ? &positive : &negative);
return (0);
}
