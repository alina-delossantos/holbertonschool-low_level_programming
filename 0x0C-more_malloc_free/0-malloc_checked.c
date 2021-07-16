#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - creates an array of chars
 * @b: unsigned int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
