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
	int fd, s, t;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	s = read(fd, buffer, letters);

	if (s < 0)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	*(buffer + s) = '\0';

	t = write(STDOUT_FILENO, buffer, s);
	free(buffer);

	if (t < 0)
		return (0);
	return (t);
}
