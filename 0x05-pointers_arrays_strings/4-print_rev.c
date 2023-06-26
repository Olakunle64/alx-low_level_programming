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
	int leng;

	leng = _strlen(s) - 1;
	while (leng >= 0)
	{
		_putchar(s[leng]);
		leng--;
	}
	_putchar('\n');
}
