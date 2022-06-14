#include "main.h"
#include <string.h>

/**
 * rev_string - Reverse String
 *
 * @s: String
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l = strlen(s);
	int i = 0;

	for (; i < l / 2; i++)
	{
		int temp = s[i];

		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
