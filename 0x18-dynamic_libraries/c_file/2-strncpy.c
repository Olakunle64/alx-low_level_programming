#include "main.h"

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
	int len2, i;

	if (n <= 0)
	{
		return (dest);
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (len2 = i; len2 < n; len2++)
	{
		dest[len2] = '\0';
	}
	return (dest);
}
