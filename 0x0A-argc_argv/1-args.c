#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of args passed to program
 *
 * @argc: Number of args
 * @argv: Array of args
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (EXIT_SUCCESS);
}
