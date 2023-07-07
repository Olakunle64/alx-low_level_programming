#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string with the prefix
 * @accept: string with the prefix to check
 *
 * Description: The function is meant to get the length of a prefix substring
 * that correspond to the bytes in accept.
 * Return: return the number of bytes in the initial segment of s which
 * consisit only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;
	int len1 = 0;
	int len2 = 0;

	i = 0;
	while (s[i] != '\0' && s[i] != ' ')
	{
		len1++;
		i++;
	}
	i = 0;
	while (accept[i] != '\0')
	{
		len2++;
		i++;
	}
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
		}
	}
	return (len);
}
