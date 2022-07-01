#!/bin/bash

for file in $(find . -name *.c*)
do
    name=$(echo $file | rev | cut  -d / -f 1 | rev )
    filename=$(echo $name | cut  -d . -f 1)

    # echo "Building $file --> $./filename.o"
    gcc -g -O -c $file

    if [ $? -eq 0 ];
    then
        echo "Archiving $./filename.o in liball.a"
        ar rc liball.a "$filename.o"

        # if [ $? -eq 0 ];
        # then
        #     echo "Archiving done!!!"
        #     rm -v ./"$filename.o"
        # else
        #     echo "Archiving error"
        # fi
    # else
    #     echo "Build error"
    fi

    # echo -e "\n"
done

ranlib ./liball.a
