#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count the number of char in a string
 * @s: string
 *
 * Description: count the number of character in a string
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenate two strings
 * @s1: destination string
 * @s2: source string
 *
 * Description: This function is meant to allocate a new space in the
 * memory which contains the content of s1, followed by the contents
 * of s2 and null terminated.
 * Return: return NULL if both string are empty or return NULL on failure
 * or return a pointer to the newly allocated space in the memory.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len_1, len_2, T_len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (!(s1 && s2))
		return (NULL);
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	len_1++;
	T_len = len_1 + len_2;
	ptr = malloc(T_len * sizeof(char));
	if (ptr)
	{
		for (i = 0; i < len_1 - 1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < len_2; j++)
		{
			ptr[i + j] = s2[j];
		}
		ptr[i + j] = '\0';
		return (ptr);
		free(ptr);
	}
	return (NULL);
}
