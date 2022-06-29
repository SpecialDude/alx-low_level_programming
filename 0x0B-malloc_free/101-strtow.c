#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * getwordcount - Count Words in a string
 *
 * @str: String
 *
 * Return: int
 */
int getwordcount(char *str)
{
	int i;
	int height = 1;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == ' ')
			height++;
	}

	return (height);
}

/**
 * strtow - Split String
 *
 * @str: string
 *
 * Return: char**
 */
char **strtow(char *str)
{
	char **newstr;
	int i, j, k, height;
	int width = 0;
	char *word;

	if (str == NULL || *str == '\0')
		return (NULL);

	height = getwordcount(str);
	newstr = malloc(sizeof(*newstr) * (height + 1));
	if (newstr == NULL)
		return (NULL);
	*(newstr + height) = NULL;
	height = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == ' ' || *(str + i + 1) == '\0')
		{
			word = malloc(sizeof(**newstr) * (width + 1));
			if (word == NULL)
				return (NULL);

			k = 0;
			for (j = i - width; j < i + 1; j++)
			{
				if (*(str + j) != ' ')
					*(word + k++) = *(str + j);
			}

			*(word + j) = '\0';
			*(newstr + height) = word;
			height++;
			width = 0;
		}
		width++;
	}
	return (newstr);
}
