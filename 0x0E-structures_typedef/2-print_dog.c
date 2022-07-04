#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog properties
 * @d: the object
 * Return: nothing
 */


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age)
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		if ((d->name == NULL) || !(d->age) || (d->owner == NULL))
		{
			printf("nil\n");
		}
	}
}
