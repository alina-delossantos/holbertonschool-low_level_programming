#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: int
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
		for (j = 0; j < n; j++)
		{
		if (j < i)
		{
			_putchar(32);
		}
		else if (j == i)
		{
			_putchar(92);
			_putchar(10);
		}
		}
		}
		else
			_putchar(10);
	}
	_putchar(10);
}
