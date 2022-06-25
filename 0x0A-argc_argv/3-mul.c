#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two cmd args
 *
 * @argc: Args count
 * @argv: Arg Array
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}    

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	m = i * j;

	printf("%d\n", m);

	return (EXIT_SUCCESS);
}
