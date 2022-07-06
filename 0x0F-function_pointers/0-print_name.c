#include <stdio.h>

/**
 * print_name - print a name
 * @name: the name to be printed
 * @f: a callback function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
