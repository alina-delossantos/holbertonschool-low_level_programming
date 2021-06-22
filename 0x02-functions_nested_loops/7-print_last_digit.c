#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: int
 *
 * Return: void
 */

int print_last_digit(int n)
{
int nbr = n % 10;
if (n < 0)
{
nbr = nbr * -1;
}
_putchar (nbr + 48);

return (nbr);
}
