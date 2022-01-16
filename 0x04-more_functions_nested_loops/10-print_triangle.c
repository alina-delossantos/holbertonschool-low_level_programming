#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: int
 *
 * Return: void
 */


void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - j))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar(10);
	}

}
