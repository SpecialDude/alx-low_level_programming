#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add Command Line Args
 *
 * @argc: Args count
 * @argv: Array of Args
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, sum, j;

	sum = 0;

	for (j = 0; j < argc; j++)
	{
		i = atoi(argv[i]);

		if (i == 0 && argv[i] != "0")
		{
			printf("Error\n");

			return (1);
		}

		sum += i;
	}

	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}