#include "holberton.h"

/**
 * rev_string - prints a string
 *
 * @s: pointer
 *
 * Return: void
 */

int _strlen(char *s)
{

	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

void rev_string(char *s)
{
int l, i;
    char *begin_ptr, *end_ptr, ch;


     l = _strlen(s);

     begin_ptr = s;
    end_ptr = s;

    for (i = 0; i < l - 1; i++)
        end_ptr++;

    for (i = 0; i < l / 2; i++)
    {

        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
        begin_ptr++;
        end_ptr--;
    }
}
