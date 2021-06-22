#include "holberton.h"
/**
 * main - entry point
 *
 * Description: prints Holberton
 *
 * Return: 0
 */

int main(void)
{
char name[] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
_putchar(name[i]);
}
_putchar(10);
return (0);
}
