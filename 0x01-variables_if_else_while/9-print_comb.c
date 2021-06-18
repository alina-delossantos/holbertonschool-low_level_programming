#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
int n = 48;
while ((n > 47) && (n < 58))
{
putchar (n);
if (n != 57)
{
putchar (44);
putchar (32);
}
n++;
}
putchar (10);
return (0);
}
