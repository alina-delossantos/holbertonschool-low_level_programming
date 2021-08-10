#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	unsigned int size;
	ssize_t writtenbytes;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		size = strlen(text_content);
	writtenbytes = write(file_desc, text_content, size);
	}

	if (writtenbytes == -1)
		return (-1);
	close(file_desc);
	return (-1);
}
