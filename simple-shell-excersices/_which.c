#include "shell.h"


char *_which(const char name[])
{
    char *path_env = _get_env(PATH_NAME); 
    char **paths;
    char *full_path;

    size_t i;
    if (name[0] == '.' || name[0] == '/')
        return ((char *)name);
    paths = split_string(path_env, ":");

    for (i = 0; paths[i]; i++)
    {
        full_path = join_path(paths[i], name);
        if (access(full_path, F_OK | X_OK) != -1)
            return (full_path);
        free(full_path);
    }
    return (NULL);
}