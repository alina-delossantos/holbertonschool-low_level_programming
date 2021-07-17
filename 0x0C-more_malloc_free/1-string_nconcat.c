#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer
 *
 * Return: void
 */

int _strlen(char *s)
{

	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: nbr
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, sizeconc;
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n >= size2)
	{
		sizeconc = size1 + size2 + 1;
	}
	else
	{
		size2 = n;
	sizeconc = size1+ n + 1;
	}
	ptr = malloc(sizeconc);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
