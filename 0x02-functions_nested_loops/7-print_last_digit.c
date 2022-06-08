#include "main.h"

/**
 * print_last_digit - print remainder of a number
 * @n: parameter
 * Return: print last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));
	return (n % 10);
}
