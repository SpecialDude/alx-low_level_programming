#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Convert a program args to a string
 *
 * @ac: Args Count
 * @av: Args
 *
 * Return: char*
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int i;
	int k = 0;
	int size = 0;

	if (ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += strlen(*(av + i));
	}

	newstr = malloc(sizeof(*newstr) * (size + ac + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		for (; *(*(av + i) + j) != '\0'; j++)
		{
			*(newstr + k) = *(*(av + i) + j);
			k++;
		}

		*(newstr + k) = '\n';
		k++;
	}

	*(newstr + k) = '\0';

	return (newstr);
}
