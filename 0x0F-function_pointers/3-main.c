#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Perform add, sub, mul, div
 * or mod operations on two numbers
 *
 * @ac: Args count
 * @av: Array of program arguments
 *
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int (*func)(int, int);
	int result;

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}


	func = get_op_func(av[2]);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(av[2], "/") == 0 || strcmp(av[2], "%") == 0) &&
			strcmp(av[3], "0") == 0
		)
	{
		printf("Error\n");
		return (100);
	}

	result = func(atoi(av[1]), atoi(av[3]));

	printf("%d\n", result);

	return (0);
}
