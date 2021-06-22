#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 *
 *
 * Return: void
 */

void jack_bauer(void)
{
int hours, minutes;

for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar((hours / 10) + 48);
_putchar ((hours % 10) + 48);
_putchar(58);
_putchar((minutes / 10) + 48);
_putchar ((minutes % 10) + 48);
_putchar(10);
}
}
}
