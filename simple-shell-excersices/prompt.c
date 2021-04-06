#include "shell.h"

/**
 * show_prompt - print prompt
 */
void show_prompt(void)
{
	/* TODO: Remember use pwd variable*/
	write(STDOUT_FILENO, PROMPT_FORMAT, 12);
}

/**
 * prompt - show prompt and wait for user input
 *          after this split user input by spaces
 * @envp: environment
 */
void prompt(char *envp[])
{
	char *user_input;
	char **user_input_args;

	show_prompt();			 /*write $*/
	user_input = _getline(); /*receive input of user*/
	if (!user_input)		 /* if malloc is failed*/
	{
		perror("Failed malloc in _getline");
		return;
	}
	if (!*user_input) /* if input of user is empty */
	{
		free(user_input);
		return; /* exit of this function and continue with while*/
	}

	if ((*user_input) == EOF)
		exit(0);
	
	if (str_equal(user_input, EXIT)) /* Exit case*/
		exit(0);
	/* split all input of user by spaces*/
	user_input_args = split_string(user_input, SPACE);
	if (user_input_args)					  /* if split is success */
		execute_child(user_input_args, envp); /* execute command */
	free(user_input);						  /*free strings*/
	// free(user_input_args);
}
