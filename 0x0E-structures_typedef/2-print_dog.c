#include "dog.h"
/**
 * print_dog - program startup
 * @d: struct being evaluated
 *
 *
 * Return: return (0) is the required function signature
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}
