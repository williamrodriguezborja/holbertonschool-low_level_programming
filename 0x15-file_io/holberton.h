#ifndef HOLBERTON_H
#define HOLBERTON_H

/* libraries*/
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


/* constant values */
#define BUFFER_SIZE 1024
#define MSG_ERROR_97 "Usage: cp file_from file_to\n"
#define MSG_ERROR_98 "Error: Can't read from file %s\n"
#define MSG_ERROR_99 "Error: Can't write to %s\n"
#define MSG_ERROR_100 "Error: Can't close fd %d\n"

/* prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
