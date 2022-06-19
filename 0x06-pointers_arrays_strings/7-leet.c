#include "main.h"

/**
 * leet - Code Up a string
 *
 * @c: String
 * Return: char* 
 */
char *leet(char *c)
{
	int i, j;

	char *wmap = "aAeEoOtTlL";
	char *cmap = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; wmap[j] != '\0'; j++)
		{
			if (c[i] == wmap[j])
				c[i] = cmap[j];
		}
	}

	return (c);
}
