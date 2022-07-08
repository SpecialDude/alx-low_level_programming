#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints Arguments of strings
 *
 * @separator: Seperator between strings
 * @n: Number of optional args passed
 * @...: Optional Args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			str = "(nil)";

		if (i < n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}

	}

	va_end(ap);

	printf("\n");
}
