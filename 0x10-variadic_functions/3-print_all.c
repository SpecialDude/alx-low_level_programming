#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print a list of argument using the
 * specified format
 *
 * @format: Format for printing
 * @...: Optional Args;
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s_arg, *separator = "";

	if (!format)
	{
		printf("\n");
		return;
	}

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%s%c", separator, va_arg(ap, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ap, double));
			break;
		case 's':
			s_arg = va_arg(ap, char *);
			if (s_arg == NULL)
				s_arg = "(nil)";
			printf("%s%s", s_arg, separator);
			break;
		default:
			continue;
		}
		separator = ", ";
	}
	va_end(ap);
	printf("\n");
}
