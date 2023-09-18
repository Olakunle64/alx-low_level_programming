#include "main.h"

/**
 * _strlen - count the character in a string
 * @s: argument
 *
 * Description: This function is meant to count the number of
 * characters of a string.
 * Return: return the length of a string.
 */
/*
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
*/
/**
 * _strncat - concatenate n bytes of src string to dest string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to append
 *
 * Description: append n bytes of src to dest and src does not need to be
 * null terminated if it contains n bytes or more bytes
 * Return: return a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2 = 0;
	int i = 0;

	if (n <= 0)
	{
		return (dest);
	}
	len1 = _strlen(dest);
	while (src[len2] != src[n])
	{
		len2++;
	}
	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
