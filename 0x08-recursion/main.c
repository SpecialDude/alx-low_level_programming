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

    printf("Factorial 5: %d\n", factorial(5));
    printf("Factorial 10: %d\n", factorial(10));

    printf("2 power 5: %d\n", _pow_recursion(2, 5));
    printf("2 power 3: %d\n", _pow_recursion(2, 3));
    printf("1 power 10: %d\n", _pow_recursion(1, 10));

    printf("Sqrt of 5: %d\n", _sqrt_recursion(5));
    printf("Sqrt of 25: %d\n", _sqrt_recursion(25));

}