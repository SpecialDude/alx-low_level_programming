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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (EXIT_SUCCESS);
}
