#include "main.h"
#include <stdio.h>
#include <stdlib.h>


void printarray(char * arr, int size)
{
    int i = 0;
    putchar('[');

    for (; i < size; i++)
    {
        putchar(*(arr + i));
        putchar(' ');
    }
    putchar(']');
}

void printarray2(char **arr)
{
    int i = 0;
    putchar('[');

    for (; *(arr + i) != NULL; i++)
    {
        printf("%s, ", *(arr + i));
    }
    putchar(']');
}

void printmatrix(int**mat, int w, int m)
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < w; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main(int ac, char *av[])
{
    /* char *k; */
    /* char* str = argstostr(ac, av);

    printf("%s", str); */

    printf("%d", ac);
    printarray(av[0], ac);

    /* printarray(create_array(20, 'A'), 20); */

    /* k = _strdup("Test");
    printf("%s\n", k); */

    /* k = str_concat("Tayo", "Adeoti");
    printf("%s\n", k); */

    /* printmatrix(alloc_grid(5, 7), 5, 7); */

    printarray2(strtow("My name is Adetayo and I Love Jesus My Saviour"));


    return (0);
}