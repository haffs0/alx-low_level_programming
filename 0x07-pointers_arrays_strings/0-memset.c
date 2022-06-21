#include <string.h>

/**
 * _memset - fill in the pointer with some constant
 * @s: a character pointer
 * @b: a character
 * @n: integer
 * Return: a pointer
 */


char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
