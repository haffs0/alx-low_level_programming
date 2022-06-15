#include <string.h>


/**
 * _strncat - concat strings base on size of n
 * @dest: string
 * @src: string
 * @n: size of string to be add to dest
 * Return: the concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
