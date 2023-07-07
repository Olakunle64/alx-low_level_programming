#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: string
 * @b: The constant byte
 * @n: the byte of memory you are to fill with b
 *
 * Description: The functionb fills the first n bytes of the
 * memory area pointed to by s with the constant byte b.
 * Return: return a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n <= 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

