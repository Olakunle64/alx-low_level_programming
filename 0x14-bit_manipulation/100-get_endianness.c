#include "main.h"

/**
 * get_endianness - checck the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *pointer = (char *)&value;

	return (*pointer == 1);
}
