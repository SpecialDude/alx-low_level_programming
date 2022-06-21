#include "main.h"

/**
 * _memset - Fills a memory with a constant byte
 *
 * @s: Memory Addres
 * @b: Constant byte
 * @n: Fist n bytes
 *
 * Return: Pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    for (; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}