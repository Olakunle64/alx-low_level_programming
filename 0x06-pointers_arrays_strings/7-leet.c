#include "main.h"

/**
 * leet - encode string into 1337
 * @s: string
 *
 * Description: This function will encode a and A into 4, e and E into 3
 * o and O into 0, t and T into 7, l and L into 1.
 * Return: return a pointer to the string
 */

char *leet(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == 'a' || s[i] == 'A')
	{
		s[i] = 52;
	}
	else if (s[i] == 'e' || s[i] == 'E')
	{
		s[i] = 51;
	}
	else if (s[i] == 'o' || s[i] == 'O')
	{
		s[i] = 48;
	}
	else if (s[i] == 't' || s[i] == 'T')
	{
		s[i] = 55;
	}
	else if (s[i] == 'l' || s[i] == 'L')
	{
		s[i] = 49;
	}
	else
	{
		continue;
	}
	}
	return (s);
}
