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

	s = malloc(sizeof(char) * size);

	for (i = 0; i < (int) size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
