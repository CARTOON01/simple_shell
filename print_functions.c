#include "shell.h"

/**
 * _putchar - writes the character c  to stdout
 * @c: character to print
 *
 * Return: 1 on sucess, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - function that prints a string
 * @s: string character to be printed
 *
 * Return: number of characters printed
 */
int print_s(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
