#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: string
 *
 * Description: print a string with recursion to followed
 * by a new line
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
