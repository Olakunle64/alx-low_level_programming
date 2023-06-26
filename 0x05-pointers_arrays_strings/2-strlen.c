#include "main.h"

/**
 * _strlen - count the character in a string
 * @s: argument
 *
 * Description: This function is meant to count the number of
 * characters of a string.
 * Return: return the length of a string.
 */

int _strlen(char *s)
{
	int len;

	while (*s)
	{
		len++;
		*s++;
	}
	return (len);
}
