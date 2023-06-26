#include "main.h"

/**
 * _puts - print a string
 * @str: argument
 *
 * Description: print a string followed by a newline to stdout
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
