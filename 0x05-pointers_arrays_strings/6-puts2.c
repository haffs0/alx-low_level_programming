#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print first letter and others character
 * @str: character
 * Return: nothing
 */

void puts2(char *str)
{
	int i, length_of_string;

	length_of_string = strlen(str);
	for (i = 0; i < length_of_string; i++)
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}
		else if ( i > 1)
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
