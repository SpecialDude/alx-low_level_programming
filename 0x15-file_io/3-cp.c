#include "main.h"

#define BUFIZ 1024

/**
 * main - Copies A file content to another
 *
 * @ac: Argument Count - Expected 2 only
 * @av: Argument Value
 *
 * Return: 0 on Success
 */
int main(int ac, char **av)
{
	int fdw, fdr, closestatusW, closestatusR, r;
	char buff[BUFIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(av[1], O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	while ((r = read(fdr, buff, BUFIZ)) > 0)
	{
		if (fdw < 0 || write(fdw, buff, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fdr);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	closestatusR = close(fdr);
	closestatusW = close(fdw);
	if (closestatusR < 0 || closestatusW < 0)
	{
		if (closestatusR < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		if (closestatusW < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
