#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - structure
 * @name: string
 * @age: float
 * @owner: string
 * Description: struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
