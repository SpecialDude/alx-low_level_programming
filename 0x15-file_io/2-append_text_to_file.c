#include "main.h"

/**
 * append_text - Append Text to the end of file
 *
 * @filename: Filename of an existing file
 * @text_content: Content to write
 *
 * Return: 1 on success -1 otherwise
 */
int append_text(const char *filename, char *text_content)
{
	int fd, s, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		s = write(fd, text_content, i);
		if (s != i)
			return (-1);
	}

	close(fd);

	return (1);
}
