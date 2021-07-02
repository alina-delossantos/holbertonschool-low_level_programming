#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
			{
				for (j = 0; j <= 12; j++)
			{
					if (separator[j] == str[i - 1])
						str[i] = str[i] - 32;
			}
			}
		}
	}
	return (str);
}
