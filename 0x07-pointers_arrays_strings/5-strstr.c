#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: Parent String
 * @needle: Substr
 *
 * Return: Pointer to the found substr or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i = 0;
    int j = 0;

    for (; haystack[i] != '\0'; i++)
    {
        for (; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j]);
                break;
        }

        if (!needle[j])
            return (&haystack[i]);
    }

    return (NULL);
}