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
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
