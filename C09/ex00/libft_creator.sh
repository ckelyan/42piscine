#!/bin/sh

mkdir -p target
cd target
cc -Wall -Wextra -Werror -c ../*.c
cd ..
ar -crs libft.a target/*.o
