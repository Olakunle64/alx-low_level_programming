#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string containing the bits
 *
 * Return: return the converted number or 0 if there is one or more
 * chars in the string b that is not 0 or 1 or when b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i;
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(b[i] >= 48 && b[i] <= 49))
			return (0);
		val <<= 1;
		val |= (b[i] - '0');
	}
	return (val);
}
