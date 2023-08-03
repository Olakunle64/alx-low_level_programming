#include "main.h"
#include <stddef.h>

/**
 * _strlen - count the number of characters in a string
 * @str: string
 *
 * Return: return the length of the string.
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * power - find the value of x raised to power of y
 * @x: first integer
 * @y: second integer
 *
 * Return: the value of x raised to the power of y
 */

int power(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * power(x, (y - 1)));
}

/**
 * char_num - convert a character to a digit
 * @c: character
 *
 * Return: return the digit
 */

int char_num(char c)
{
	if (c == 48)
		return (0);
	else
		return (1);
}

/**
 * binary_to_unit - convert a binary number to an unsigned int
 * @b: string containing the bits
 *
 * Return: return the converted number or 0 if there is one or more
 * chars in the string b that is not 0 or 1 or when b is NULL
 */

unsigned int binary_to_unit(const char *b)
{
	int i, j;
	unsigned int mul = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < _strlen(b); i++)
	{
		if (!(b[i] >= 48 && b[i] <= 49))
			return (0);
	}
	if (_strlen(b) > 32)
		return (0);
	for (i = 0, j = _strlen(b) - 1; i < _strlen(b); i++, j--)
	{
		mul += char_num(b[i]) * power(2, j);
	}
	return (mul);
}
