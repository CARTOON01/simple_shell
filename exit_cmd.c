#include "shell.h"

/**
 * exit_cmd - function that exits command
 * @command: tokenized command
 * @line: input from stdin
 * Return: 0
 */
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
