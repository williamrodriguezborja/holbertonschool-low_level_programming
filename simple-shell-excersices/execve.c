#include <unistd.h>
#include "shell.h"

/**
 * execute - use execve to execute a command with parameters
 * @argv: parameters
 * @envp: Environment
 */
void execute(char *argv[], char *envp[])
{
	char *path_command;
	char *command = argv[0];

	if (check_equal(argv[0], "exit"))
		exit(0);

	path_command = _which(command);

	if (path_command)
	{
		if (execve(path_command, argv, envp) == -1)
			perror("Error:");
		return;
	}
	write(STDOUT_FILENO, "Command not Found\n", 19);
}

/**
 * execute_child - execute command in new child procces
 * @argv: parameters
 * @envp: Environment
 */
void execute_child(char *argv[], char *envp[])
{
	pid_t child;
	int signal;

	child = fork();

	if (child == -1)
		perror("Fork() failed");

	if (child == 0)
		execute(argv, envp);

	if (child > 0)
		wait(&signal);
}
