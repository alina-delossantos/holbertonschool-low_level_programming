#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */

int main (void)
{

	long int even_sum, sum, first, second;

	sum = 0;
	even_sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{

		sum = first + second;
		if (sum % 2 == 0)
		{
			even_sum += sum;
		}
	first = second;
	second = sum;
	}
	printf("%li\n", even_sum);
	return(0);
}
