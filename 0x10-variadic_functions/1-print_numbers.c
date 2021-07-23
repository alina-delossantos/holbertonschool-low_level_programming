#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints nbr
 * @separator: char
 * @n: nbr
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int nbr;

	if (n == 0)
	{
		putchar(10);
		return;
	}

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		nbr = va_arg(arguments, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", nbr);
			else
				printf("%d", nbr);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", nbr);
			else
				printf("%d%s", nbr, separator);
		}
	}
	va_end(arguments);
}
