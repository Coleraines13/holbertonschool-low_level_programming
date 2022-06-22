#include "dog.h"
/**
 * free_dog - program startup
 * @d: struct being evaluated
 *
 *
 * Return: (0)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
