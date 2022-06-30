#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - add number of character from second string to first
 * @s1: string to be add to
 * @s2: second string
 * @n: number of character to be add
 * Return: a string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, m, k, b;

	b = (int) n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	m = strlen(s1);
	k = strlen(s2);

	if (b >= k)
	{
		b = k;
	}
	s = malloc(sizeof(char) * (m + b + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < m; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < b; i++)
	{
		s[i + m] = s2[i];
	}
	s[i + m] = '\0';
	return (s);
}
