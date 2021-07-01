#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer
 * @src: pointer
 * @n: bytes
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (src[i] != '\0') && (i < n); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
