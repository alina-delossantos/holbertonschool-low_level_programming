#include "holberton.h"

/**
 * _puts - prints a string
 *
 * @str: pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar(10);
}
