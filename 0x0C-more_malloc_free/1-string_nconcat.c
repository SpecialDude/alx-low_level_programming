#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Length of string
 *
 * @str: string
 *
 * Return: unsigned int
 */
unsigned int _strlen(char *str)
{
	int l = 0;

	if (str == NULL)
		return (l);

	while (str[l])
		l++;

	return (l);
}

/**
 * _min - Minimum of two numbers
 *
 * @a: First Number
 * @b: Second Number
 *
 * Return: unsigned int (minimum)
 */
unsigned int _min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * string_nconcat - Concatenate two strings
 * with n characters only from s2
 *
 * @s1: First String
 * @s2: Second String
 * @n: Number of characters of s2 to concatenate
 *
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, tl;
	char *ptr;
	unsigned int i = 0, j = 0;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	tl = l1 + _min(l2, n);

	ptr = malloc(sizeof(*s1) * (tl + 1));

	if (ptr == NULL)
		return (NULL);

	if (s1)
	{
		while ((ptr[i] = s1[i]) != '\0')
			i++;
	}

	if (s2)
	{
		while (i < tl && (ptr[i] = s2[j++]) != '\0')
			i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
