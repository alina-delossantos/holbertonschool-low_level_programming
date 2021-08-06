#include "holberton.h"

/**
 * _strlen - string size
 * @s: strin
 * Return: size
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * power - xp
 * @base: base
 * @exp: xp
 * Return: int
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - bin to int
 * @b: bin
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int length, i;

	sum = 0;
	if (b == NULL)
		return (sum);
	length = _strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * power(2, length - i - 1);
	}
	return (sum);
}
