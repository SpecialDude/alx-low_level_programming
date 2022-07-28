#include "main.h"
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints out its content
 *
 * @filename: Name of file
 * @letters: size of characters to read
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int status;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf):
		return (0);

	status = read(fd, buf, letters);

	if (status < 0)
	{
		free(buf);
		return (0);
	}

	close(fd);

	status = write(2, buf, letters);

	if (status < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);

	return (status);
}
