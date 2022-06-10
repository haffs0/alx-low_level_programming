#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 * Return: nothing
 */


void print_most_numbers(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
		       _putchar(num);
		num++;
	}

	_putchar('\n');
}
