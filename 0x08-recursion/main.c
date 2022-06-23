#include "main.h"
#include <unistd.h>
#include <stdio.h>

int main()
{
    char *s = "Tayo";
    char *m = "Adeoti";

    _puts_recursion(s);
    _puts_recursion(m);

    _print_rev_recursion(m);
    _print_rev_recursion(s);
    _putchar('\n');

    printf("lenght s: %d\n", _strlen_recursion(s));
    printf("lenght m: %d\n", _strlen_recursion(m));
}