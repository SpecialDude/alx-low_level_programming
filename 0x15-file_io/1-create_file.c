#include "main.h"

/**
 * create_file - Creates a file and writes to it
 *
 * @filename: Name of file
 * @text_content: Content to be written
 *
 * Return: 1 on success, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, t;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	while (text_content[i])
	{
		i++;
	}

	if (i > 0)
	{
		t = write(fd, text_content, i);

		if (t != i)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
