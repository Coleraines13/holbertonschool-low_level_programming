#include "main.h"

/**
 * main - this prints the number of arguments passed into it
 * @argc: argument count for main
 * @argv: vector to the arguments
 * Return: (0)
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
