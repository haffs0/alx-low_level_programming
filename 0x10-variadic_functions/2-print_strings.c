#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - print a strings
 * @separator: what separate the string
 * @n: Number of strings
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *strArg;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		strArg = va_arg(ap, char *);

		if (strArg == NULL)
			printf("(nil)");

		printf("%s", strArg);

		if ((separator != NULL) && (i != n))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
