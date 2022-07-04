#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialized dog details
 * @d: the object to manipulate
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: nothing
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
