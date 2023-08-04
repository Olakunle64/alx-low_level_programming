#include "main.h"

/**
 * flip_bits - find the number of bits you would need to flib to
 * get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: return the number of bit you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ex_result = n ^ m;
	unsigned int counter = 0;

	while (ex_result > 0)
	{
		counter += ex_result & 1;
		ex_result >>= 1;
	}
	return (counter);
}
