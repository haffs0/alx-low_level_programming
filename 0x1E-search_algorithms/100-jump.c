#include <stdio.h>
#include <math.h>
/**
 * jump_search - search for an element in an array
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: searching value
 * Return: 1 if found otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL)
		return (-1);

	jump = 0;
	step = sqrt(size);

	for (jump = 0; jump < size && array[jump] < value; jump += step)
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

	i = jump - step;
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
