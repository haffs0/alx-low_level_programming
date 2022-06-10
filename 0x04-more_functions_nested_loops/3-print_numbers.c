#include "main.h"

/**
 * print_numbers - print number from 0 t0 9
 * Return: nothing
 */


void print_numbers(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}

	_putchar('\n');
}
