#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints 10 times the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
  int i, letter;
  for (i = 0; i < 11; i++)
    {
      for (letter = 97; letter < 123; letter++)
	{
	_putchar(letter);
	}
      _putchar(10);
    }
}
