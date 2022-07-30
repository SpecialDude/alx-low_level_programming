#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;

    t = read_textfile("onePusher.sh", 1024);

    printf("\n\nsize Written: %d", t);

    return (0);
}