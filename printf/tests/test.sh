#!/bin/bash
for i in 0
do
	file=$i-test.c

	# test one
	gcc -Wno-format -Wall -Werror -Wextra  char/$i-test.c ../_printf.c ../_putchar.c ../print_functions.c ../validations.c && ./a.out 
	# gcc *.c test/char/${file} && ./a.out | head -1 > test1.tmp
	# gcc *.c test/char/${file} && ./a.out | tail -2 > test2.tmp

	diff test1.tmp test2.tmp > /dev/null
	echo $? $file # test two
	# test three
done