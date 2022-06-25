#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the Program's name
 *
 * @argc: Number of Command line arguments
 * @argv: Array of Command line arguments
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (EXIT_SUCCESS);
}
