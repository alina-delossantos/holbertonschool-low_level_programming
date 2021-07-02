#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: string
 *
 * Return: char
 */

char *rot13(char *str)
{
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
	}
	}
	return (str);
}
