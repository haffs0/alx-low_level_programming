#include <stdio.h>

/**
 * main - print the argument passed to the command line
 * @argc: count of argumnet passed
 * @argv: argument array
 * Return: 0 always
 */


int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
