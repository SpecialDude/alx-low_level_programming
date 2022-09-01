#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcode of the main function
 *
 * @ac: args count
 * @av: Number of args
 *
 * Return: int
 */
int main(int ac, char *av[])
{
	int byte, i;
	char *str;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	byte = atoi(av[1]);

	if (byte < 0)
	{
		printf("Error\n");
		return (2);
	}

	str = (char *)main;

	for (i = 0; i < byte - 1; i++)
		printf("%02hhx ", str[i]);

	printf("%02hhx\n", str[byte - 1]);

	return (0);
}
