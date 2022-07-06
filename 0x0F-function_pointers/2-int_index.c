#include <stdio.h>

/**
 * int_index - print index of matched element
 * @array: Array lists
 * @size: Size of array
 * @cmp: callback
 * Return: the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
