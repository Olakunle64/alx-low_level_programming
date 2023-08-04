#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: address of the number
 * @index: the position of the bit
 *
 * Return: return 1 if it worked or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n |= mask;
	return (1);
}
