make -C src/ all clean
#gcc src/libftprintf.a test/main.c -o test.out
gcc -o test.out test/main.c -L src/ -lftprintf

./test.out

make -C src/ fclean
rm -f test.out