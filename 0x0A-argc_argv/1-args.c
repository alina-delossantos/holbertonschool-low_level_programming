#include "holberton.h"
#include <stdio.h>

/**
 * main - print arguments
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
