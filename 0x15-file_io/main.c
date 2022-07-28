#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    // int n;
    // if (ac != 2)
    // {
    //     dprintf(2, "Usage: %s filename\n", av[0]);
    //     exit(1);
    // }

    // n = read_textfile(av[1],  1024);
    // printf("\n(printed chars: %li)\n", n);

    // return (0);

    read_textfile("onePusher.sh", 1024);
}