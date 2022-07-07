#include <stdio.h>
#include <stdlib.h>

int main(int av, char *av[])
{
	int byte;

	if (av != 1)
	{
		printf("Error\n");
		return (98);
	}

	byte = atoi(av[1]);

	return (0);
}
