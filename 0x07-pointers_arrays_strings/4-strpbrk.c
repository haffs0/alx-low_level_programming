#include <string.h>

/**
 * _strpbrk - look for the first occurrance of a string
 * @s: string to check for occurrance
 * @accept: character to search for
 * Return: a pointer
 */


char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
