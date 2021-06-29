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
	int i, j, m;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	m = i;
	j = m / 2;
	while (j <= m)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar(10);
}
