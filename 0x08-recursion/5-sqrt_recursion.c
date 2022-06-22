#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - print square root of a number
 * @n: number to check
 * Return: integer
 */


int _sqrt_recursion(int n)
{
	int sqr;

	sqr = sqrt(n);

	if ((n % sqr) != 0)
	{
		return (-1);
	}
	else
	{
		return (sqr);
	}
}
