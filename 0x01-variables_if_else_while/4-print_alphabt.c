#include <stdio.h>

/**
 * main - print alphabet in lower case without q and e
 * Return: it return nothing
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}

	putchar(10);

	return (0);
}
