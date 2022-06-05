#include <stdio.h>

/**
 * main - print alphabet in lower and upper case
 * Return: it return nothing
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'A')
	{
		putchar(upper);
		upper++;
	}

	putchar(10);

	return (0);
}
