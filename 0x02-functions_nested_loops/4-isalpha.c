#include "holberton.h"

/**
 * _isalpha - checks for lowercase
 *
 * @c: int
 *
 * Return: void
 */

int _isalpha(int c)
{
if ((c > 64) && (c < 91))
{
return (1);
}
if ((c > 96) && (c < 123))
{
return (1);
}
else
{
return (0);
}
}
