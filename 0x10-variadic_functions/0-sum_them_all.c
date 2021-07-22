#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: const unsigned int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (sum = 0, i = 0; i < n; i++)
	{
		sum = sum + va_arg(arguments, int);
	}
	va_end(arguments);

	return (sum);
}
