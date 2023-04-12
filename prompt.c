#include "shell.h"

/**
 * prompt_user - function that prints $ to prompt user to input command
 * Return: nothing
 */
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
