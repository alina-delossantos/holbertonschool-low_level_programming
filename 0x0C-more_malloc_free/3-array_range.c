#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: int
 * @max: int
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int difference, i;
	int *ptr;

	if (min > max)
		return(NULL);

	difference = (max - min) + 1;
	ptr = (int *) malloc(difference * sizeof(int));
	if (ptr == NULL)
		return(NULL);
	for (i = 0; i < difference; i++, min++)
		ptr[i] = min;
	return (ptr);
}
