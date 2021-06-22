#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
int letter;
for (letter = 97; letter < 123; letter++)
{
_putchar(letter);
}
_putchar(10);
}
