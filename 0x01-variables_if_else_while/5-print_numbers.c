#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints nbrs 0-9
 *
 * Return: 0
 */

int main(void)
{
  int n = 48;
while ((n > 47) && (n < 58))
{
putchar (n);
n++;
}
putchar (10);
return (0);
}
