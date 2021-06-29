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

/**
 * puts2 - returns the length of a string
 *
 * @str: pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
{
	_putchar(str[i]);
}
	_putchar(10);
}
