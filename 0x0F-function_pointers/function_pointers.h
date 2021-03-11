#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*)(int));
int valid_operator(char *);
int to_int(char *);
int (*get_op_func(char *))(int, int);
void error(int);


#endif
