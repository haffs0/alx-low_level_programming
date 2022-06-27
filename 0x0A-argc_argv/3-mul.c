#include "main.h"

/**
 * main - print the argument passed to the command line
 * @argc: count of argumnet passed
 * @argv: argument array
 * Return: 0 always
 */


int main(int argc, char **argv)
{
	int count, mul = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			mul *= atoi(argv[count]);
		}
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	printf("%i\n", mul);

	return (0);
}
