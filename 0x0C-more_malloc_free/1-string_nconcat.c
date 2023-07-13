#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count the number of character in a string
 * @str: string
 *
 * Description: This function is meant to count the number of
 * character in a given string
 * Return: return the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - concatenate two string
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes to copy
 *
 * Description: This function is meant to concatenate n bytes
 * of s2 to s1.
 * Return: return NULL if the function fails or return pointer
 * to the newly allocated space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, len3;
	char *new_array;

	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	while (n > len2)
	{
		n--;
	}
	new_array = malloc((n + len1 + 1) * sizeof(char));
	if (new_array)
	{
		for (i = 0; i < n; i++)
		{
			s1[len1 + i] = s2[i];
		}
		s1[len1 + i] = '\0';
		len3 = _strlen(s1);
		for (i = 0; i < len3; i++)
		{
			new_array[i] = s1[i];
		}
		new_array[i] = '\0';
		return (new_array);
	}
	return (NULL);
}
