#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int div = 2, maxPrime;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxPrime = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lu\n", maxPrime);
				break;
			}
		}
	}
	return (0);
}
