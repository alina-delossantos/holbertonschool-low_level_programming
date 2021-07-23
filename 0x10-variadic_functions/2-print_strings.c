#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: char
 * @n: nbr
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arguments;
	unsigned int i;
	char *st;

	if (n == 0)
	{
		putchar(10);
		return;
	}
	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);
		if (str == NULL)
			str = "(nil)";

		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s\n", str);
	}
	va_end(arguments);
}
