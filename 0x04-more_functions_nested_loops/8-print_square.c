#include "main.h"

/**
 * print_square - it square n times
 * @size: number of square to be print
 * Return: nothing
 */


void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size < 0)
		_putchar('\n');
}
