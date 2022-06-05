#include <stdio.h>

/**
 *main - print 0-89 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '89')
	{
		if (n <= '9')
		{
			putchar('0');
		}
		putchar(n);
		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar(10);

	return (0);
}
