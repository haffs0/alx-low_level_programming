#include <string.h>

/**
 * _strncpy - copy certain size of string and concat to dest
 * @dest: string
 * @src: string
 * @n: size of string to be add to dest
 * Return: concatenate string
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
