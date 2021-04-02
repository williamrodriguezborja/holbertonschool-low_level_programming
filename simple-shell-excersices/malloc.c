#include "shell.h"

char *malloc_string(char *text)
{
    size_t size;
    char *new_text;

    size = _str_len(text);

    new_text = malloc(sizeof(char *) * size);

    if (!new_text)
        return (NULL);

    _str_copy(text, new_text);

    return (new_text);
}