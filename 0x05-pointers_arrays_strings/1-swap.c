#include "holberton.h"

/**
 * swap_int - prints a square
 *
 * @a: int
 * @b: int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
