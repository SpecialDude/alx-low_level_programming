#include "main.h"
#include "string.h"

/**
 * _strncpy - Copy Strings
 *
 * @dest: Destination str
 * @src: Source str
 * @n: number
 *
 * Return: Pointer to dest str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
