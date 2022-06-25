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
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, sum;

	sum = 0;

	while(*++argv)
	{
		i = atoi(*argv);

		if (i == 0 && *argv != "0")
		{
			printf("Error\n");

			return (1);
		}

		sum += i;
	}

	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}