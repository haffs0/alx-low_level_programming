#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int n;

	alpha = 'a';

	for (n = 1; n <= 10; n++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
