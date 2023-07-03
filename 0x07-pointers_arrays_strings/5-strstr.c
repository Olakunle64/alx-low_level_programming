#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string
 * @needle: substring
 *
 * Description: find the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes are not
 * compared.
 * Return: return a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int len1, len2;

	len1 = 0;
	len2 = 0;
	while (haystack[len1] != '\0')
	{
		len1++;
	}
	while (needle[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		for (j = i, k = 0; j < len2; k++, j++)
		{
			if (haystack[j] != needle[k])
			{
				break;
			}
		}
		if (k == len2)
		{
			return (haystack + i);
		}
	}
	return (0);
}
