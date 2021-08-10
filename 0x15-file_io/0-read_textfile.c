#include "holberton.h"

/**
 * read_textfile - reads file and prints to stdout
 * @filename: file name
 * @letters: nbr letters
 * Return: nbr of letter or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buf;
	ssize_t readbytes, writtenbytes;

	if (filename == 0)
		return (0);
	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
		return (0);

	readbytes = read(file_desc, buf, letters);

	if (readbytes == -1)
		return (0);

	buf[letters + 1] = '\0';

	close(file_desc);

	writtenbytes = write(STDOUT_FILENO, buf, readbytes);

	if (writtenbytes == -1)
		return (0);

	free(buf);

	return (readbytes);
}
