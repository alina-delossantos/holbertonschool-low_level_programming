#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
int n = 97, o = 65;
while ((n > 96) && (n < 123))
{
putchar (n);
n++;
}
while ((o > 64) && (o < 91))
{
putchar (o);
o++;
}
putchar (10);
return (0);
}
