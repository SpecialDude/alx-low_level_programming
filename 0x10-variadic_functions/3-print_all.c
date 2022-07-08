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
	int i = 0, i_arg;
	char f, c_arg, *s_arg, *separator = ", ";
	double f_arg;

	va_start(ap, format);
	while (format[i])
	{
		f = format[i++];
		if (format[i] == '\0')
			separator = "";

		switch (f)
		{
		case 'c':
			c_arg = va_arg(ap, int);
			printf("%c%s", c_arg, separator);
			break;
		case 'i':
			i_arg = va_arg(ap, int);
			printf("%d%s", i_arg, separator);
			break;
		case 'f':
			f_arg = va_arg(ap, double);
			printf("%g%s", f_arg, separator);
			break;
		case 's':
			s_arg = va_arg(ap, char *);
			if (s_arg == NULL)
				s_arg = "(nil)";
			printf("%s%s", s_arg, separator);
			break;
		default:
			break;
		}
	}
	va_end(ap);
	printf("\n");
}
