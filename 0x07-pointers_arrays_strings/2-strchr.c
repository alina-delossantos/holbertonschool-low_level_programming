#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - copies memory area
 *
 * @s: pointer
 * @c: char
 *
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
