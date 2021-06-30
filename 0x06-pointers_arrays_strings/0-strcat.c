#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *p;

	while (*dest != '\0')
	{
		*p++ = *dest++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return(dest);
	}
