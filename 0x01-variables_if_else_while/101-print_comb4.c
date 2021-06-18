#include <stdio.h>
/**
 * main - entry point
 *
 * Description:  prints all possible different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
int first = 48, second = 48, third = 48;
for (first = 48; first < 56; first++)
{
for (second = first + 1; second < 58; second++)
{
for (third = second + 1; third < 58; third++)
{
if ((second != first) && (second != third) && (first != third))
{
putchar (first);
putchar (second);
putchar (third);
if ((first < 55) || (second < 56) || (third < 57))
{
putchar (44);
putchar (32);
}
}
}
}
}
putchar (10);
return (0);
}
