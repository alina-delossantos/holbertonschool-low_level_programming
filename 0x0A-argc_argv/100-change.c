#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * changecalculator - calcs nbr coins
 * @n: money
 * Return: coins
 */

int changecalculator(int n)
{
	int coins, a25, a10, a5, a2, a1;

	coins = 0;
	a25 = 0;
	a10 = 0;
	a5 = 0;
	a2 = 0;
	a1 = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			a25 += 1;
		}
		else if (n >= 10)
		{
			n -= 10;
			a10 += 1;
		}
		else if (n >= 5)
		{
			n -= 5;
			a5 += 1;
		}
		else if (n >= 2)
		{
			n -= 2;
			a2 += 1;
		}
		else
		{
			n -= 1;
			a1 += 1;
		}
	}
	coins = a25 + a10 + a2 + a5 + a1;

	return (coins);
}

/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		coins = changecalculator(atoi(argv[1]));
		printf("%d\n", coins);
	}
	return (0);
}
