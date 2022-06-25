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
int main(int argc __attribute__((unused)), char *argv[])
{
	while(*argv)
	{
		printf("%s\n", *argv++);
	}

	return (EXIT_SUCCESS);
}
