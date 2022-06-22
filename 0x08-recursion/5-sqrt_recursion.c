#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - print square root of a number
 * @n: number to check
 * Return: integer
 */


int _sqrt_recursion(int n)
{
	int start, end, mid;

	start = 0;
	end = n;
	mid = (start + end) / 2;

	if ((mid * mid) == n)
	{
		return (mid);
	}
	else if ((mid * mid) < n)
	{
		return (_sqrt_recursion(mid));
	}
	return (_sqrt_recursion(mid - 1));
}
