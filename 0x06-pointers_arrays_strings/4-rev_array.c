#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: int
 * @n: int
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int aux[14];
	int i;

	for (i = 0; i < n; i++)
		aux[n - i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = aux[i + 1];
}
