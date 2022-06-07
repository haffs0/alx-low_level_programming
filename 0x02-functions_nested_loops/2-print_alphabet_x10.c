#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int n;


	for (n = 1; n <= 10; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
