#include "dog.h"


/**
 * init_dog - program startup
 * @d: struct being evaluated
 * @name: first char being evaluated
 * @owner: second char being evaluated
 * @age: float being evaluated
 *
 * Return (0)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
