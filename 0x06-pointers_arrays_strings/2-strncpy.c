#include "main.h"

/**
 * _strlen - count the character in a string
 * @s: argument
 *
 * Description: This function is meant to count the number of
 * characters of a string.
 * Return: return the length of a string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strncpy - copy n bytes of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of character to copy from src
 *
 * Description: This function is meant to copy n bytes of src to dest
 * Return: return a pointer to the resulting dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len2 = 0;
	int i, sub, r_len;

	if (n <= 0)
	{
		return(dest);
	}
	r_len = _strlen(src);
	while (src[len2] != src[n])
	{
		len2++;
	}
	for (i = 0; i < len2; i++)
	{
		dest[i] = src[i];
	}
	sub = n - r_len;
	if (n > r_len)
	{
		while (sub > 1)
		{
			dest[i] = '\0';
			i++;
			sub--;
		}
		dest[i] = '\0';
	}
	return (dest);
}
