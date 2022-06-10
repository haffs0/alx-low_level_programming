#include "main.h"


/**
 * print_diagonal - print line number n times
 * @n: size of diagonal
 * Return: nothing
 */


void print_diagonal(int n)
{
	int linenum;
	int linelen;

	for (linenum = 0; linenum < n; ++linenum)
	{
		for (linelen = 0; linelen < linenum; ++linelen)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
