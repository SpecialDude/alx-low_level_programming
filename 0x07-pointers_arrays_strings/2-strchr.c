#include "main.h"
#include "stdio.h"

/**
 * _strchr - Locate a Character in a string
 *
 * @s: String
 * @c: Character to locate
 *
 * Return: NULL if not found, Pointer to the memory where found
 */
char *_strchr(char *s, char c)
{
    while ('\0' != *s)
    {
        if (*s == c)
            return (s);

        s++;

    }

    return (NULL);    
}
