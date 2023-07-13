#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: unsigned integer
 *
 * Description: This function is meant to allocate memory using
 * malloc
 * Return: if malloc fails, you should terminate with an exit
 * status of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
