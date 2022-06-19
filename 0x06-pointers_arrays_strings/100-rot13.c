#include "main.h"

/**
 * rot13 - Encode string with ROT13
 *
 * @c: String
 *
 * Return: char*
 */
char *rot13(char *c)
{
	int i, j;

	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *alph4 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != "\0"; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (c[i] == alpha[j])
				c[i] = alph4[j];
		}
	}

	return (c);
}
