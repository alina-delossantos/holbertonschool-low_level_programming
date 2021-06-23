#include "holberton.h"

/**
 * times_table - prints the n times table
 *
 * @n: int
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, column, product, one, ten, hundred;

	if (n >= 0 && n < 15)
	{
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)

			product = column * row;

				if (column == 0)
				{
					_putchar(48);
				}
				else if (product < 10)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar(32);
			_putchar(product + 48);
		}
				else if (product >= 10 && product <100)
		{
			ten = ((product / 10) + 48);
		one = ((product % 10) + 48);
		_putchar(44);
		_putchar(32);
			_putchar(32);
		_putchar(ten);
		_putchar(one);
		}
				else if (product >= 100)
		{
			hundred = ((product / 100) + 48);
			_putchar(44);
			_putchar(32);
			_putchar(hundred);
			_putchar(ten);
			_putchar(one);
		}
	}
		_putchar(10);
}
}
