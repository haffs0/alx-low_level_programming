#include "main.h"


/**
 * print_line - print line number n times
 * @n: integer
 * Return: nothing
 */


void print_line(int n)
{
	while (--n >= 0)
		_putchar('_');

	_putchar('\n');
}
