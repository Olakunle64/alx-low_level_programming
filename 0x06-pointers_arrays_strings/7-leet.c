#include "main.h"

/**
 * check_4_alpha - check for a specific alphabet
 * @s: string
 * @a: first alphabet to check
 * @b: second alphabet to check
 * @rep: replace the alphabet that correspond to a and b with rep
 *
 * Description: check for a specific alphabet and swap it with the value of rep
 * Return: return a pointer to the string.
 */

char *check_4_alpha(char *s, char a, char b, char rep)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a || s[i] == b)
		{
			s[i] = rep;
		}
	}
	return (s);
}

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
	check_4_alpha(s, 'a', 'A', '4');
	check_4_alpha(s, 'e', 'E', '3');
	check_4_alpha(s, 'o', 'O', '0');
	check_4_alpha(s, 't', 'T', '7');
	check_4_alpha(s, 'l', 'L', '1');
	return (s);
}
