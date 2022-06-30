#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
 * _strdup - Copy String into new dynamic memory
 *
 * @str: String to copy
 *
 * Return: char*
 */
char *_strdup(char *str)
{
	char *newstr;
	int l = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}

	newstr = malloc(sizeof(*str) * l);

	if (newstr == NULL)
		return (NULL);

	for (l = 0; *(str + l) != '0'; l++)
		*(newstr + l) =  *(str + l);
	*(newstr + l) = '\0';

	return (newstr);
}
