make -C src/ all clean
gcc src/libftprintf.a test/main.c -o test.out

./test.out

make -C src/ fclean
rm -f test.out