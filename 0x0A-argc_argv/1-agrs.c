#include "main.h"

/**
 * main - print the argument passed to the command line
 * @argc: count of argumnet passed
 * @argv: argument array
 * Return: 0 always
 */


int main(int argc, char **argv)
{
        int count, output = 0;

	for (count = 0; count < argc; count++)
	{
		output += 1;
	}
	printf("%d\n", output);

        return (0);
}
