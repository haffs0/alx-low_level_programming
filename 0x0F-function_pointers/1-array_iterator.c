#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - print item in an array
 * @array: Array lists
 * @size: Size of Array
 * @action: callback
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(98);

	for (i = 0; i < size; i++)
		action(*(array + i));
}
