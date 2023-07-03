#include "main.h"

/**
 * _strpbrk - seach a string for any of a set of bytes
 * @s: string
 * @accept: the string that contains the character to match against
 *
 * Description: The function is meant to search a string for any
 * of a set of bytes in the accept string.
 * Return: return a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if ((s[i] == accept[j]) && (s[i] != ' '))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
