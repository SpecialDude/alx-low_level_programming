#include "function_pointers.h"

/**
 * print_name - Prints a String using a Printer Function
 *
 * @name: String to print
 * @f: Function to print the string
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
