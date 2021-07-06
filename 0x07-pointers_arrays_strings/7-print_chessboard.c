#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: board
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	char square;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			square = a[i][j];
			_putchar(square);
		}
	_puthcar(10);
	}
}
