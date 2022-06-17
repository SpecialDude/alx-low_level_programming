#include "main.h"

/**
 * _strcmp - Compare Two String
 *
 * @s1: First str
 * @s2: Second std
 *
 * Return: 1 If strs are the 0 otherwise
 */
int _strcmp(char *s1, char *s2);
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
