#include <stdio.h>
/**
 * print_int_array - print an array
 * @array: pointer to the first element of array
 * @l: begining of the array
 * @r: last index of the array
 * Return: nothing
 */
void print_int_array(int *array, size_t l, size_t r)
{
	size_t i;

	for (i = l; i <= r; i++)
	{
		printf("%d", *(array + i));
		if (i != r)
			printf(", ");
	}
}


/**
 * binary_search - search for value using binary search
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: 1 if found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		print_int_array(array, l, r);
		printf("\n");
		mid = (l + r) / 2;
		if (*(array + mid) == value)
			return (mid);
		if (value < *(array + mid))
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
