#include "main.h"


/**
 * malloc_checked - allocate a space with malloc
 * @b: size of space
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
