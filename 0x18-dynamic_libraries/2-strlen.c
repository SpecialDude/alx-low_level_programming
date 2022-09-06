#include "main.h"

/**
 * _strlen - Calculate the lenght of a string
 *
 * @s: String (char pointer)
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
