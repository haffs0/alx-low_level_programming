#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print reverse of a string
 * @s: string to be reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, length_of_string;

	length_of_string = strlen(s);
	for (i = length_of_string - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
