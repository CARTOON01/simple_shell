#include "shell.h"

/**
 * handle_signal - function that keeps track of user interactive mode
 * @m: signal number
 *
 * Return: NIL
 */
void handle_signal(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
