#include <string.h>

/**
 * _strspn - print the size of length of prefix string
 * @s: character to check for the substring
 * @accept: the substring
 * Return: the size of the prefix of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
