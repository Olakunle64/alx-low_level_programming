#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @s: string
 *
 * Description: change all lowercase letter of a string to uppercase
 * letter
 * Return: return a pointer to the string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
