#include <stdio.h>
/**
 * main - first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long first = 0, second = 1, sum;
	unsigned long first_front, first_back, second_front, second_back;
	unsigned long front, back;

	for (i = 0; i < 92; i++)
	{
		sum = first + second;
		printf("%lu, ", sum);

		first = second;
		second = sum;
	}
	first_front = first / 10000000000;
	second_front = second / 10000000000;
	first_back = first % 10000000000;
	second_back = second % 10000000000;
	for (i = 93; i < 99; i++)
	{
		front = first_front + second_front;
		back = first_back + second_back;
		if (first_back + second_back > 9999999999)
		{
			front += 1;
			back %= 10000000000;
		}
		printf("%lu%lu", front, back);
		if (i != 98)
			printf(", ");
		first_front = second_front;
		first_back = second_back;
		second_front = front;
		second_back = back;
	}
	printf("\n");
	return (0);
}
