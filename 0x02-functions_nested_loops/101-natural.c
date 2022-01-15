#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int nbr, sum;

	sum = 0;

	for (nbr = 0; nbr < 1024; nbr++)
	{
		if (nbr % 3 == 0 || nbr % 5 == 0)
		{
			sum += nbr;
		}
	}

	printf("%d\n", sum);

	return (0);
}
