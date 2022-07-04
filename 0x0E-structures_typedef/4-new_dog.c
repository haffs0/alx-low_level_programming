#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - create new dog instance
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog structure
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc((sizeof(char) * (int) strlen(name)) + (sizeof(char) * (int) strlen(owner)) + 2);

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
