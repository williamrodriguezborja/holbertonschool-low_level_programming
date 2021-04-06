#include "shell.h"

char *current = NULL;

/**
 * _strtok - replace
 */
char *_strtok(char *token, const char *delim)
{
    size_t i, first_delimiter;

    first_delimiter = 0;
    /* if not delimit  */
    if (!delim)
        return (NULL);

    /* segundo uso*/
    if (!token)          /*  llego nulo */
        token = current; /* token = current */

    if (!current && !token)
        return (NULL);

    for (i = 0; token[i]; i++) /*lee hasta que encuentres el delimitador.*/
    {
        while (str_contain(token + i, (char *)delim))
        {
            if (!first_delimiter)
            {
                first_delimiter = 1;
                token[i] = '\0'; /* poner /0 */
            }
            i++;
        }
        if (first_delimiter)
        {
            current = token + i; /* current  a al siguiente posicion del nulo hasta que sea diferente al delimitator */
            return (token);
        }
    }
    current = NULL;
    return (token);
}
