#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 *
 * @s1: Frist String
 * @s2: Second String
 *
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	char* newstr;
	int l1 = 0;
	int l2 = 0;
	int i = 0;
	int j = 0;

	if (s1 != NULL)
		l1 = strlen(s1);

	if (s2 != NULL)
		l2 = strlen(s2);

	newstr = malloc(sizeof(char) * (l1 + l2));

	if (newstr == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(newstr + i) = *(s1 + i);
		i++;
	}

	while (*(s2 + j) != '\0')
	{
		*(newstr + i) = *(s2 + j);
		j++;
		i++;
	}

	*(newstr +i) = '\0';

	return (newstr);
}
