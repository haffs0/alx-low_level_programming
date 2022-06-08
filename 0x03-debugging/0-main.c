#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i = 0, j;

	j = positive_or_negative(i);

	if (j == 0)
	{
		printf("%i is zero", j);
	}
	else
	{
		printf("%i", j);
	}

	return (0);
}
