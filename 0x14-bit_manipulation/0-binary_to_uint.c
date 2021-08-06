#include "holberton.h"

/**
 * binary_to_uint - bin to int
 * @b: strin
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, bit = 1;

	if (b == 0)
		return (0);
	for (i = 0; b[i]; i++)
		;
	for (i--; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '1')
		{
			dec += bit;
			bit = bit * 2;
		}
		else
			bit = bit * 2;
	}
return (dec);
}
