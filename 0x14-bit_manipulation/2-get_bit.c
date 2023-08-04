#include "main.h"

/**
 * get_bit - find the value of a bit at a given index
 * @n: the number
 * @index: the position to find
 *
 * Return: return the value of the bit at the index or -1
 * if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((n & mask) ? 1 : 0);
}
