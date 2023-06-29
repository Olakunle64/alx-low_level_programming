#include "main.h"

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
	int i;
	int cap;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap && ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
		{
			s[i] = s[i] - 32;
			cap = 0;
		}
		else if (s[i] == ' ' || s[i] == ',' || s[i] == '\t' || s[i] == ';'
				|| s[i] == '.' || s[i] == '!' || s[i] == '?'
				|| s[i] == '\'' || s[i] == '(' || s[i] == ')'
				|| s[i] == '{' || s[i] == '}' || s[i] == '\n'
				|| s[i] == '"')
		{
			cap = 1;
		}
		else
		{
			cap = 0;
		}
	}
	return (s);
}
