#include <string.h>

/**
 * _memcpy - copy memory from source to other
 * @dest: where to copy memory to
 * @src: where to copy memory from
 * @n: size of memory to copy
 * Return: a pointer with copy memory in place
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
