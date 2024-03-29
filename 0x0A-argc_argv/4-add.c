#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (EXIT_SUCCESS);
	}

	for (j = 0; j < argc; j++)
	{
		i = atoi(argv[j]);
		if (i == 0 && !strcmp(argv[j], "0"))
		{
			printf("Error\n");
			return (1);
		}
		sum += i;
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
