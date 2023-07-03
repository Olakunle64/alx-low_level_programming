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
	int len1, len2;

	len1 = 0;
	len2 = 0;
	while (s[len1] != '\0')
	{
		len1++;
	}
	while (accept[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if ((s[i] == accept[j]) && (s[i] != ' '))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
