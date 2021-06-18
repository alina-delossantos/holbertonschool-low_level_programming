#include <stdio.h>
/**
 * main - entry point
 *
 * Description: numbers of base 16 lowercase
 *
 * Return: 0
 */

int main(void)
{
int n = 48, o = 97;
while ((n > 47) && (n < 58))
{
putchar (n);
n++;
}
while ((o > 96) && (o < 103))
{
putchar (o);
o++;
}
putchar (10);
return (0);
}
