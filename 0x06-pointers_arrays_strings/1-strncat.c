#include "main.h"
#include "string.h"

/**
 * _strncat - Concatenate strings up to n
 *
 * @dest: Destination str
 * @src: Source str
 * @n: Number
 *
 * Return: Pointer to dest str
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = strlen(dest);
	int i;

	for (i = d; i < d + n; i++)
	{
		dest[i] = src[i - d];
	}

	return (dest);

}
