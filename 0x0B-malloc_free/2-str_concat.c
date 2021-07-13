#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, sizes1, sizes2, sizeconc;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (sizes1 = 0; (*(s1 + sizes1) != '\0'); sizes1++)
		;
	for (sizes2 = 0; (*(s2 + sizes2) != '\0'); sizes2++)
		;
	sizeconc = sizes1 + sizes2;
	ptr = (char *)malloc(sizeconc * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sizes1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < sizes2; i++)
		ptr[sizes1 + i] = s2[i];
	return (ptr);
}
