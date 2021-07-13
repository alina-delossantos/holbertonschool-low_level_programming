#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - creates an array of chars
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; (*(str + size) != '\0'); size++)
		;
	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
