#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: int
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptd;

	ptd = (char *)malloc(size * sizeof(char));

	if (ptd == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(ptd + i) = c;
		}
		return (ptd);
	}
	else
		return (NULL);
}
