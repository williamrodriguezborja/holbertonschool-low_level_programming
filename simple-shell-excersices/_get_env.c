#include "shell.h"

char *_get_env(char *env_key)
{
    char **tmp;
    extern char **environ;
    char *tmp_item;
    size_t i;

    tmp_item = NULL;

    for (i = 0; environ[i]; i++)
    {
        /* tmp = [key, value] */
        /* tmp[0]  key        */
        /* tmp[1] value       */
        tmp_item = malloc_string(environ[i]);
        tmp = split_string(tmp_item, "=");
        if (check_equal(tmp[0], env_key))
            return malloc_string(tmp[1]);
    }
    return (NULL);
}

