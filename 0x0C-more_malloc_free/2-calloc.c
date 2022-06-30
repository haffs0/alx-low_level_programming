#include "main.h"


/**
 * _calloc - asigned memory space to an array
 * @nmemb: size of array
 * @size: size of type
 * Return: array with certain space
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	c = malloc(nmemb * size);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		c[i] = 0;
	}

	return (c);
}
