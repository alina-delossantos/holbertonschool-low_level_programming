#include "2-strlen.c"
#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, l = _strlen(str);

	i = l / 2;
	if (l % 2)
		i++;
	while (i < l)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
