#ifndef SHELL_H
#define SHELL_H

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
/* prototypes */

void write_welcome();
char **split_string(char *string, const char *delimiter);
char *join_path(char *str1, const char *str2);
void execute(char *argv[], char *envp[]);
void execute_child(char *argv[], char *envp[]);
void signal_handler(int signum);
void prompt();
char *_get_env(char *env);
char *_which(const char name[]);
char *_getline();
char *malloc_string(char *text);
size_t _str_len(char *text);
int check_equal(char *text, char *value_to_compare);
void _str_copy(char *text, char *dest);
/* constants */
#define BUFFER_SIZE 1024
#define WHICH_PATH = '/usr/bin/which'
#define PATH_NAME "PATH"
#define TTY "/dev/pts/1"
#define PROMPT_FORMAT "\033[32m$ \033[0m"
#define SPACE " "

#endif