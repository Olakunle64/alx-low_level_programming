#include "main.h"

/**
 * _strlen - count the number of character in a string
 * @str: string
 *
 * Description: count the number of character in a string and return
 * the appropriate value
 * Return: return the length of the string
 */

char _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * cap_string - capitalize all words of a string
 * @s: string
 *
 * Description: This function is meant to capitalize all words
 * of a string.
 * Return: return a pointer to the string.
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		if (s[i] == ' ' || s[i] == ',' || s[i] == '\t' || s[i] == ';'
			|| s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '\'' || s[i] == '(' || s[i] == ')'
			|| s[i] == '{' || s[i] == '}' || s[i] == '\n'
			|| s[i] == '"')
		{
			if ((s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
