#include "main.h"
#include "string"

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
	int d = strlen(dest);
	int s = strlen(src);

	for (i = d; i < s + d; i++)
	{
		dest[i] = src[i - d];
	}

	return (dest);
}
