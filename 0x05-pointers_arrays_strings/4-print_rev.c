#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string
 *
 * Description: print a string in reverse followed by a new line
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
