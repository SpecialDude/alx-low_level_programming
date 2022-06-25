#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all the command line arguments
 *
 * @argc: Argument count
 * @argv: Array of Arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	while(*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (EXIT_SUCCESS);
}
