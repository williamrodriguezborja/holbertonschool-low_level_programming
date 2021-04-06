#include "shell.h"

/**
 * signal_handler - receive and handler SIGINT signal
 * @signum: signal of system
 */
void signal_handler(int signum)
{
	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n", 1);
		show_prompt();
	}

	if (signum == SIGXFSZ)
	{
		write(STDOUT_FILENO, "limit of size\n", 15);
		exit(0);
	}
}
