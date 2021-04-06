#ifndef HEADER_H
#define HEADER_H

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int get_ppid(void);

int print_av(int ac, char **av);

#endif /* HEADER_H */