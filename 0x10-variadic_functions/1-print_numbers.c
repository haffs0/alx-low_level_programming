#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print a number follow by a separator
 * @separator: what separate the number
 * @n: count of number to be print
 * Return: nothing
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator != NULL) && (i != n))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
