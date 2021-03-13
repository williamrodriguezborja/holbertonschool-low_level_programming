#!/bin/bash
for i int {0..1}
do
	file=$1-main.c

	# test one
	gcc *.c test/${file} && ./a.out | head -1 > test1.tmp
	gcc *.c test/${file} && ./a.out | tail -2 > test2.tmp

	diff test1.tmp test2.tmp > /dev/null
	echo $? $file # test two
	# test three
done