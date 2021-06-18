#include <stdio.h>
/**
 * main - entry point
 *
 * Description:  prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
int first = 48, second = 48;
for (first = 48; first < 57; first++)
{
for (second = first + 1; second < 58; second++)
{
if (second != first)
{
putchar (first);
putchar (second);
if ((first < 56) || (second < 57))
{
putchar (44);
putchar (32);
}
}
}
}
putchar (10);
return (0);
}
