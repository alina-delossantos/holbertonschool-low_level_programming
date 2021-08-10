#include "holberton.h"

/**
 * append_text_to_file - reads file and prints to stdout
 * @filename: file name
 * @text_content: nbr letters
 * Return: nbr of letter or 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	unsigned int size;
	ssize_t writtenbytes;
	
	if (filename == NULL)
		return (-1);
	
	if (text_content == NULL)
		return (-1);
	
	file_desc = open(filename, O_WRONLY | O_APPEND);
	
	if (file_desc == -1)
		return (-1);
	
	size = strlen(text_content);
	
	writtenbytes = write(file_desc, text_content, size);
	
	if (writtenbytes == -1)
		return (-1);
	
	close(file_desc);
	
	return (1);
}
