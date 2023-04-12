#include "shell.h"

/**
 * test_path - function that checks if path entered is valid
 * @path: tokenized path
 * @command: user input
 *
 * Return: path appended, NULL on failure
 */
char *test_path(char **path, char *command)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = append_path(path[i], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}
