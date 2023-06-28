#include "main.h"

/**
 * _strlen - count the characters in a string
 * @s: string
 *
 * Description: count the numbers of character in a string
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * rev_string - reverse a string
 * @s: string
 *
 * Description: This function is meant to reverse a string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len;
	int len_h;
	char store;

	len = _strlen(s);
	len_h = len / 2;
	for (i = 0; i < len_h; i++)
	{
		store = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = store;
	}
}
