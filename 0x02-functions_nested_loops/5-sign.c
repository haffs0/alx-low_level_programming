#include "main.h"

/**
 * print_sign - check number and print + or 0 or -
 * @n: number to be checked
 * Return: 1 if num > 0, 0 if num==0, and -1 if num < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	_putchar('\n');
}
