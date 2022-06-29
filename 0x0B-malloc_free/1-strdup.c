#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy a string into a pointer
 * @str: character to be copied
 * Return: a string
 */


char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * ((int) strlen(str) + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			*(s + i) = *(str + i);
		}
	}
	return (s);
}
