#include <string.h>


/**
 * _strstr - print first occcurrance
 * @haystack: where to check for occurrance
 * @needle: what to look for
 * Return: the occurrance
 */


char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
