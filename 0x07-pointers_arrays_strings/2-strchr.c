#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to be located
 *
 * Description: This function is meant locate a character
 * in a string.
 * Return: return a pointer to the first occurence of the
 * character c in the string s or NULL if the character
 * is not found.
 */

char *_strchr(char *s, char c)
{
	int i;
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
