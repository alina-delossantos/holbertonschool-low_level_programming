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
int first, second;

for (first = 0; first < 100; first++)
{
for (second = 0; second < 100; second++)
{
if (first < second)
{
putchar((first / 10) + 48);
putchar ((first % 10) + 48);
putchar(32);
putchar ((second / 10) + 48);
putchar((second % 10) + 48);

if (first < 98 || second < 99)
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
