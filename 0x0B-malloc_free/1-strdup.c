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
	int i = 0;

	if (str == NULL)
		return(NULL);

	while (*(str + l) != '\0')
	{
		l++;
	}

	newstr = malloc(sizeof(*str) * (l + 1));

	if (newstr == NULL)
		return (NULL);

	while ((*(newstr + l) = *(str + i)) != '0')
		i++;

	return (newstr);
}
