#include "dog.h"

/**
 * init_dog - init a var of type struct dog
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 *
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
