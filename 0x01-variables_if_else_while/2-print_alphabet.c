#include <stdio.h>
/**
 * main - entry point
 *
 * Description:  prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
int n = 97;
while ((n > 96) && (n < 123))
{
putchar (n);
n++;
}
putchar (10);
return (0);
}
