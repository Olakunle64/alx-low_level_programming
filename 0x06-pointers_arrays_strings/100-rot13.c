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
		for (fd = 97, rep = 110; fd <= 110 && rep <= 122; fd++, rep++)
		{
			if (s[i] == fd)
			{
				s[i] = rep;
			}
			else if (s[i] == rep)
			{
				s[i] = fd;
			}
		}
	}
	return (s);
}
