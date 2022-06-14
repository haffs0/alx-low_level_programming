#include <stdio.h>

/**
 * swap_int - swap two parameter
 * @a: a is pointer
 * @b: b is pointer
 * Return: nothing
 */


void swap_int(int *a, int *b)
{
	if (a && b)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
