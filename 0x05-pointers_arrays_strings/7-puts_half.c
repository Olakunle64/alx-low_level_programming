#include "main.h"

/**
 * _strlen - count the characters in a string
 * @s: string
 *
 * Descriptioin: count the number of characters in a string
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * puts_half - print half of a string
 * @str: string
 *
 * Description: prints half of a string followed by a new line
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int n;
	int len1;

	len = _strlen(str);
	n = (len - 1) / 2;
	n++;
	len1 = (len / 2);
	if (len % 2 != 0)
	{
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		while (str[len1] != '\0')
		{
			_putchar(str[len1]);
			len1++;
		}
	}
	_putchar ('\n');
}
