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

	int charOnly = 1;

	sum = 0;

	for (j = 0; j < argc; j++)
	{
		i = atoi(argv[j]);

		if (i == 0 && !strcmp(argv[j], "0"))
		{
			;
		}
		else
		{
			charOnly = 0;
			break;
		}
	}

	if (charOnly)
	{
		printf("%d\n", sum);
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
