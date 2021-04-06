#include "shell.h"

/**
 * _which - own implementation of which command by more info man which
 * @name: command to find
 * @envp: environment
 * Return: full path
 */
char *_which(const char name[], char *envp[])
{
	size_t i;
	char *path_env = _get_env(PATH_NAME, envp);
	char **paths;
	char *full_path;

	if (name[0] == '.' || name[0] == '/') /* built in*/
		return ((char *)name);
	paths = split_string(path_env, ":"); /* path*/

	for (i = 0; paths[i]; i++)
	{
		full_path = join_path(paths[i], name);
		if (access(full_path, F_OK | X_OK) != -1)
			return (full_path);
		free(full_path);
	}
	return (NULL);
}
