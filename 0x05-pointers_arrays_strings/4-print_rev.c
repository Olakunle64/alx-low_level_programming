#include "main.h"

/**
 * _strlen - count the characters in a string
 * @str: string
 *
 * Description: count the numbers of characters in a string
 * Return: return the length of a string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * print_rev - print a string in reverse
 * @s: the string
 *
 * Description: print a string in reversee followed by a new line
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
