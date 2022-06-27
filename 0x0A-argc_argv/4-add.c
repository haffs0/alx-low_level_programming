#include "main.h"
#include <ctype.h>

/**
 * main - print the argument passed to the command line
 * @argc: count of argumnet passed
 * @argv: argument array
 * Return: 0 always
 */


int main(int argc, char **argv)
{
	int count, add = 0, zero = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (isdigit(*argv[count]) == 0)
			{
				printf("Error \n");
				return (1);
			}
			else
			{
				add += atoi(argv[count]);
			}
		}
	}
	else
	{
		printf("%i\n", zero);
	}
	printf("%i\n", add);

	return (0);
}
