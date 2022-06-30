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
	unsigned int l = 0;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + l))
	{
		l++;
	}

	newstr = malloc(sizeof(char) * (l + 1));

	if (newstr == NULL)
		return (NULL);

	while ((*(newstr + i) = *(str + i)) != '0')
		i++;

	return (newstr);
}
