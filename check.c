#include "shell.h"

/**
 * checker - function that checks if command is built in
 * @cmd: user input
 * @buf: buffer line from getline function
 *
 * Return: 1 if cmd executes, 0 if not
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}
