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

	if (n <= 0)
		_putchar(10);

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(92);
			}
			else
				_putchar(32);
		}
		_putchar(10);
		}

}
}
