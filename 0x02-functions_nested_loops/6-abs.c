#include "holberton.h"

/**
 * _abs -  computes the absolute value of an integer
 *
 * @n: int
 *
 * Return: void
 */

int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (-n);
else
return (0);
}
