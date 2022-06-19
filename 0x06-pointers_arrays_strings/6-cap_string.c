#include "main.h"

/**
 * cap_string - Capitalize Each word
 * 
 * @c: String
 * 
 * Return: Pointer to string
 */
char *cap_string(char *c)
{
	int i = 0;

	if (*c >= 'a' && *c <= 'z')
	{
		*c = (char)((int)*c - 32);
	}

	while (*(c + i) != '\0')
	{
		if (*(c + i) == ' ')
		{
			if (*(c + i) >= 'a' && *(c + i) <= 'z')
			{
				*(c + i) = (char)((int)*(c + i) - 32);
			}
		}
	}
}