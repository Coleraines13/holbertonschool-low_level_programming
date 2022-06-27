#include "main.h"

/**
 * main - this multipllies two numbers
 * @argc: argument count for main
 * @argv: vector for the arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
