#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: String
 * @accept: Substring
 *
 * Return: Lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; accept[j] != '0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				f = 1;
			}
		}

		if (!f)
		{
			break;
		}
	}

	return (n);
}
