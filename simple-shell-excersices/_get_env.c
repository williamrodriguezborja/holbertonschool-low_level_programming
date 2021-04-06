#include "shell.h"

/**
* _get_env - find env key and return value
* @env_key: key to be find
* @envp: environment
* Return: value
*/
char *_get_env(char *env_key, char *envp[])
{
	char **tmp;
	char *tmp_item;
	size_t i;

	tmp_item = NULL;

	for (i = 0; envp[i]; i++)
	{
		/* tmp = [key, value] */
		/* tmp[0]  key        */
		/* tmp[1] value       */
		tmp_item = malloc_string(envp[i]);
		tmp = split_string(tmp_item, "=");
		if (str_equal(tmp[0], env_key))
			return (malloc_string(tmp[1]));
	}
	return (NULL);
}
