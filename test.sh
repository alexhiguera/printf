make -C src/ all clean
#gcc src/libftprintf.a test/test-printf.c -o test.out
gcc -o test.out test/test-printf.c -L src/ -lftprintf

./test.out

make -C src/ fclean
rm -f test.out