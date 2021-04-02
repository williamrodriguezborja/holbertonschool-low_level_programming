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
		exit(0);
	}
}
