#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int create_and_write(char *name, char *content, size_t size)
{
    int file_descriptor;
    file_descriptor = open(name, O_CREAT | O_WRONLY, 0700);

    if (file_descriptor == -1)
    {
        printf("Failed to create new file\n");
        exit(EXIT_FAILURE);
    }
    write(file_descriptor, content, size);
    close(file_descriptor);
    return (EXIT_SUCCESS);
}

int read_file(char *name, size_t size)
{
    char buffer[28];
    int file_descriptor;

    file_descriptor = open(name, O_RDONLY, 400);

    if (file_descriptor == -1)
    {
        printf("Failed to read file\n");
        exit(EXIT_FAILURE);
    }
    read(file_descriptor, buffer, size);
    buffer[size] = '\0';
    printf("%s", buffer);
    return (EXIT_SUCCESS);
}

int main(void)
{
    char *name_file = "file.txt";
    size_t size = 30;
    create_and_write(name_file, "write content until function\n", size);
    read_file(name_file, size);

    int number = 0;

    number = O_WRONLY;
    number = 3 & 2;
    number = 1 << 1;
    number = O_RDONLY + O_WRONLY;
    printf("%d\n", number);
    return (EXIT_SUCCESS);
}