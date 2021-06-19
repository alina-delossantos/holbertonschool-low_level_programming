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
int first, second, third, fourth;
for (first = 48; first < 58; first++)
{
for (second = 48; second < 58; second++)
{
for (third = 48; third < 58; third++)
{
for (fourth = second + 1; fourth < 58; fourth++)
{
putchar(first);
putchar (second);
putchar (32);
putchar (third);
putchar(fourth);
if (first < 57 || second < 56 || third < 57 || fourth < 57)
{
putchar (44);
putchar(32);
}
}
}
}
}
putchar (10);
return (0);
}
