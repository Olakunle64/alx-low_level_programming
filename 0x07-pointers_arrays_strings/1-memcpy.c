#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination string
 * @src: source string
 * @n: byte of memory area to copy
 *
 * Description: copy n bytes from memory area src to memory
 * area dest.
 * Return: return a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n <= 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
