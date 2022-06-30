#!/bin/bash

gcc -g -O -c 0x02-functions_nested_loops/0-putchar.c -o 0x09-static_libraries/0-putchar.o
gcc -g -O -c 0x02-functions_nested_loops/3-islower.c -o 0x09-static_libraries/3-islower.o
gcc -g -O -c 0x02-functions_nested_loops/4-isalpha.c -o 0x09-static_libraries/4-isalpha.o
gcc -g -O -c 0x02-functions_nested_loops/6-abs.c -o 0x09-static_libraries/6-abs.o
gcc -g -O -c 0x04-more_functions_nested_loops/0-isupper.c -o 0x09-static_libraries/0-isupper.o
gcc -g -O -c 0x04-more_functions_nested_loops/1-isdigit.c -o 0x09-static_libraries/1-isdigit.o
gcc -g -O -c 0x05-pointers_arrays_strings/2-strlen.c -o 0x09-static_libraries/2-strlen.o
gcc -g -O -c 0x05-pointers_arrays_strings/3-puts.c -o 0x09-static_libraries/3-puts.o
gcc -g -O -c 0x05-pointers_arrays_strings/9-strcpy.c -o 0x09-static_libraries/9-strcpy.o
gcc -g -O -c 0x05-pointers_arrays_strings/100-atoi.c -o 0x09-static_libraries/100-atoi.o
gcc -g -O -c 0x06-pointers_arrays_strings/0-strcat.c -o 0x09-static_libraries/0-strcat.o
gcc -g -O -c 0x06-pointers_arrays_strings/1-strncat.c -o 0x09-static_libraries/1-strncat.o
gcc -g -O -c 0x06-pointers_arrays_strings/2-strncpy.c -o 0x09-static_libraries/2-strncpy.o
gcc -g -O -c 0x06-pointers_arrays_strings/3-strcmp.c -o 0x09-static_libraries/3-strcmp.o
gcc -g -O -c 0x07-pointers_arrays_strings/0-memset.c -o 0x09-static_libraries/0-memset.o
gcc -g -O -c 0x07-pointers_arrays_strings/1-memcpy.c -o 0x09-static_libraries/1-memcpy.o
gcc -g -O -c 0x07-pointers_arrays_strings/2-strchr.c -o 0x09-static_libraries/2-strchr.o
gcc -g -O -c 0x07-pointers_arrays_strings/3-strspn.c -o 0x09-static_libraries/3-strspn.o
gcc -g -O -c 0x07-pointers_arrays_strings/4-strpbrk.c -o 0x09-static_libraries/4-strpbrk.o
gcc -g -O -c 0x07-pointers_arrays_strings/5-strstr.c -o 0x09-static_libraries/5-strstr.o

if [ $? -eq 0 ];
then
    echo "All Compilation Successfull!!"
else
    echo "Some errors occured"
    exit
fi

echo -e "\nCommencing Archiving..."

for file in $(ls ./0x09-static_libraries/)
do
    ext="$(echo $file | cut -d . -f 2)"
    if [ "$ext" = "o" ];
    then
        ar rc libmy.a "./0x09-static_libraries/$file"
    else
        echo "$file is not an obj file, skippin..."
    fi
done

if [ $? -eq 0 ]
then
    echo "Archiving Successfull!!"
else
    echo "Some errors occured"
    exit
fi

ranlib libmy.a

mv -v ./libmy.a ./0x09-static_libraries/libmy.a
