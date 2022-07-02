#include "main.h"


/**
 * _realloc - reallocate memory
 * @ptr: content to re-allocate
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: pointer
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
	{
		p[i] = oldp[i];
	}

	free(ptr);
	return (p);
}
