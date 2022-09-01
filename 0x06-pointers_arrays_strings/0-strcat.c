#include "main.h"

/**
 * _strcat - Concatenate string
 *
 * @dest: Destination str
 * @src: Source str
 *
 * Return: Pointer to destination str
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
