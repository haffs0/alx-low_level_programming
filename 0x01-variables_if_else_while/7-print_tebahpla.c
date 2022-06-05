#include <stdio.h>

/**
 * main - print alphabet in lower case
 * Return: it return nothing
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar(10);

	return (0);
}
