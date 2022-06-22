#include <stdio.h>


/**
 * is_prime_number - check if number is prime or not
 * @n: number to be checked
 * Return: 1 if prime 0 otherwise
 */


int is_prime_number(int n)
{
	int p = 2;

	int *l = &p;

	if ((n % p) == 0)
	{
		return (0);
	}
	else if (p == n)
	{
		return (1);
	}
	*l += 1;
	return (is_prime_number(n));
}
