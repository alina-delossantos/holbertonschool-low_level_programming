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
  int first = 48, second = 49;
  while ((first < 57) && (second < 58))
{
  if (first != second)
    {
  putchar (first);
  while (second < 58)
    {
      putchar (second);
      if ((second != 57))
	{
	putchar (44);
      putchar (32);
	}
      second++;
    }
  first++;
 }
 }
putchar (10);
return (0);
}
