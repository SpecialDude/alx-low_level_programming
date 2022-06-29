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

	newstr = malloc(sizeof(*str) * strlen(str));

	if (newstr == NULL)
		return (NULL);

	newstr =  str;

	return (newstr);
}
