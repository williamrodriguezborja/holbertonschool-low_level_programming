#include "shell.h"

int main(int argc, char const *argv[])
{
    char *buffer;   /*  char *    */
    size_t size = 1024;
    /* stream */  /* read file */
    /* use shell read line in stdin */
    buffer = malloc(1024);
    printf("Introduce un comando: ");

    /* file_descriptor = 0 */
    getline(&buffer, &size, stdin); /* get line fill buffer */
    printf("Me pasaste el comando: %s ", buffer);
    return 0;
}
