#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
void positive_or_negative(int i)
{
		
		char *positive = "is positive \n";
		char *negative = "is negative \n";
		char *zero = "zero is 0\n";	
		

		printf("%d ", i);
	        printf("%s", i == 0 ? zero : i > 0 ? positive : negative);
}
