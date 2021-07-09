#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char * argv[])
{
	int i, j;
	long sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (isdigit(argv[i][j]) == 0)
			{
			printf("Error\n");
			return(1);
			}
		sum += atoi(argv[i]);
	}
	printf("%ld\n", sum);
	return(0);
}
