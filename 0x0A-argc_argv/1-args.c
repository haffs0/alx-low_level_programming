#include <stdio.h>

/**
 * main - print the argument passed to the command line
 * @argc: count of argumnet passed
 * @argv: argument array
 * Return: 0 always
 */


int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
