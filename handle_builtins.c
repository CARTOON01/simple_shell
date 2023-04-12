#include "shell.h"

/**
 * handle_builtin - function that handles execution of built in functions
 * @command: user input commands
 * @line: input from stdin
 *
 * Return: 1 if executed, 0 if it fails
 */
int handle_builtin(char **command, char *line)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*command, builtin.env) == 0)
	{
		print_env();
		return (1);
	}
	else if (_strcmp(*command, builtin.exit) == 0)
	{
		exit_cmd(command, line);
		return (1);
	}
	return (0);
}
