#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer
 * @accept: constant byte
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
