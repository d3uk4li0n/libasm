nasm -felf64 $1.asm
gcc main.c $1.o -o $1