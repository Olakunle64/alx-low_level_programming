#include "main.h"

/**
 * rot13 - Encode a string using rot13
 * @s: string
 *
 * Description: This function is meant to encode a string
 * using rot13 encryption.
 * Return: return a pointer to the string
 */

char *rot13(char *s)
{
	char fd;
	char rep;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			for (fd = 'A', rep = 'N'; fd <= 'N' && rep <= 'Z'; fd++, rep++)
			{
				if (s[i] == fd)
					s[i] = rep;
				else if (s[i] == rep)
					s[i] = fd;
			}
		}
		else
		{
		for (fd = 'a', rep = 'n'; fd <= 'n' && rep <= 'z'; fd++, rep++)
		{
			if (s[i] == fd)
				s[i] = rep;
			else if (s[i] == rep)
				s[i] = fd;
		}
		}
	}
	return (s);
}
