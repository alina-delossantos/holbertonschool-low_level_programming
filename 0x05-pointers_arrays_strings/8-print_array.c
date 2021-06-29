#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: int
 * Return: void
 */

void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		printf("%d", a[counter]);
		if (counter < (n - 1))
			printf(", ");
		counter++;
	}
}
