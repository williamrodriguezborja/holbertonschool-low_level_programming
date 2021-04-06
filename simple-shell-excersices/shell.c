#include "shell.h"

/**
 * before -  set shell configuration before main
 */
void __attribute__((constructor)) before()
{
	setenv("TERM", "xterm-256color", 0); /*Need this for clear command*/
		 /* callback for SIGINT signal [crtl + c]*/
}
/**
 * main - execute simple shell
 * @argc: arguments counter
 * @argv: arguments
 * @envp: environment
 * Return: Exit success
 */
int main(int argc, char *argv[], char *envp[])
{
	signal(SIGINT, signal_handler); /*espera la senal 2 [CTRL + C].  cuando llegue ejecute la funcion de la derecha*/

	if (argc != 1)
	{
		execute(argv, envp); /*Execute without fork command*/
		return (EXIT_SUCCESS);
	}
	write_welcome(); /*welcome message*/
	while (1)
		prompt(envp);
	return (EXIT_SUCCESS);
}
