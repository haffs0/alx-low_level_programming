#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - add two strings togther
 * @s1: string to be add to
 * @s2: second string
 * Return: a string
 */


char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, m, n;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}

	m = strlen(s1);
	n = strlen(s2);
	s = malloc(sizeof(char) * (m + n + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < m; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[i + m] = s2[i];
	}
	s[i + m] = '\0';
	return (s);
}
