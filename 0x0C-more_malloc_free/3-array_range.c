#include "main.h"

/**
 * array_range - allocate array range
 * @min: the smallest number
 * @max: the highest number
 * Return: integer
 */


int *array_range(int min, int max)
{
	int *n, d, i, j;

	if (min > max)
	{
		return (NULL);
	}

	d = max - min;
	n = malloc(sizeof(int) * (d + 1));
	if (n == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; j <= max; i++, j++)
	{
		n[i] = j;
	}

	return (n);
}
