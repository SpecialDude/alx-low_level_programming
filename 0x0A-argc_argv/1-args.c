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
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc);

	return (EXIT_SUCCESS);
}
