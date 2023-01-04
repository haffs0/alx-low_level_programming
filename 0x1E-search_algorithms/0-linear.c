#include <stdio.h>
/**
 * linear_search - search for an element in an array linearly
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: searching value
 * Return: 1 if found otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
