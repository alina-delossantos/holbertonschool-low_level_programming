#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 *
 * Return: void
 */

void times_table(void)
{
int row, column, product, one, ten;

for (row = 0; row < 10; row++)
{
for (column = 0; column < 10; column++)
{

product = column * row;

if (column == 0)
{
_putchar(48);
}
if (product < 10 && column > 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(product + 48);
}
if (product >= 10 && column > 0)
{
ten = ((product / 10) + 48);
one = ((product % 10) + 48);
_putchar(44);
_putchar(32);
_putchar(ten);
_putchar(one);
}
}
_putchar(10);
}
}
