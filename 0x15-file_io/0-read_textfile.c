#include "main.h"
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    int status;
    char buf[letters];

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);

    if (fd < 0)
        return (0);

    status = read(fd, buf, letters);

     if (status < 0)
        return (0);

    close(fd);

    status = write(2, buf, letters);

    if (status < 0)
        return (0);

    return (status);
}