#include "main.h"

/**
 * char_in - Character in a String
 *
 * @str: string
 * @c: Char
 *
 * Return: int
 */
int char_in(char *str, char c)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if (str[j] == c)
			return (1);
	}

	return (0);
}
/**
 * cap_string - Capitalize Each word
 *
 * @c: String
 *
 * Return: Pointer to string
 */
char *cap_string(char *c)
{
	int i = 0;

	char seps[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	if (*c >= 'a' && *c <= 'z')
	{
		*c = (char)((int)*c - 32);
	}

	while (*(c + i) != '\0')
	{
		if (char_in(seps, *(c + i)))
		{
			if (*(c + i + 1) >= 'a' && *(c + i + 1) <= 'z')
			{
				*(c + i + 1) = (char)((int)*(c + i + 1) - 32);
			}
		}
	}

	return (c);
}
