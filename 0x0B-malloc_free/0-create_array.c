#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of characters
 * @size: memory size
 * @c: character sample
 * Return: created arrayed
 */


char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if ((int) size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int) size; i++)
		{
			*(s + i) = c;
		}
	}
	return (s);
}
