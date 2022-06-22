#include <math.h>


/**
 * _pow_recursion - calculate the base in number of power
 * @x: base value
 * @y: power value
 * Return: the calculated value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (y > 0 ? x * _pow_recursion(x, y - 1) : 1);
}
