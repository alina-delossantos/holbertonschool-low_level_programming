#include "holberton.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, size, writtenbytes;
	
	if (filename == NULL)
		return(-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_desc == -1)
		return(-1);

	if (text_content == NULL)
	{
		size = 0;
		text_content = "";
	}
	else
	{
		size = _strlen(text_content);
	}
	writtenbytes = write(file_desc, text_content, size);

	if(writtenbytes == -1)
		return(-1);
	close (file_desc);
	return(-1);
}
