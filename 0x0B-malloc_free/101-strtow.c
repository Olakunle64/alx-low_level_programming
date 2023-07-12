#include "main.h"
#include <stdlib.h>

/**
 * char_count - count the number of character excluding
 * white spaces in a string
 * @str: string
 *
 * Description: This function is meant to count the number
 * of characters in a given string.
 * Return: return the length of the characters.
 */

int char_count(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			len++;
			if (str[i + 1] == ' ')
				break;
		}
		else
			continue;
	}
	return (len + 1);
}

/**
 * word_count - count the number of words in a given string.
 * @s: string
 *
 * Description: This function is meant to count the number of words
 * in a given string.
 * Return: return the length of the character
 */

int word_count(char *s)
{
	int i, word = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			if (s[i + 1] == ' ')
				word++;
		}
	}
	return (word);
}

/**
 * start_of_char - locate the starting point of a word
 * @str: string
 *
 * Description: This function is meant to locate the starting point
 * of a word.
 * Return: return the length before the starting point of the word
 */

int start_of_char(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			break;
		j++;
	}
	return (j + 1);
}

/**
 * strtow - split a string into words
 * @str: string
 *
 * Description: This function is meant to split a string into words
 * Return: return NULL if str == NULL or str == "" or NULL if it fails
 * or pointer to the array of strings.
 */

char **strtow(char *str)
{
	int i, j, k, word, start, word_length;
	char **arr;

	if (str == NULL)
		str = "";
	if (str == NULL)
		return (NULL);
	word = word_count(str);
	arr = malloc(word * sizeof(*arr));
	if (arr)
	{
		for (i = 0; i < word; i++)
		{
			start = start_of_char(str);
			word_length = char_count(str + start);
			arr[i] = malloc((word_length + 1) * sizeof(char));
			if (arr[i])
			{
			for (j = start, k = 0; j <= start + word_length; j++, k++)
			{
				arr[i][k] = str[j];
			}
			arr[i][k] = '\0';
			str += start + word_length;
			}
			else
			{
				for (k = 0; k < i; k++)
				{
					free(arr[k]);
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	return (NULL);
}
