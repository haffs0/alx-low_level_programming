#include <stdio.h>

/**
 * main - print 1 to 100 with words in between
 * Return: Always 0
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}

	putchar('\n');

	return (0);
}
