#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first pointer variable
 * @b: second pointer variable
 *
 * Description: This function is meant to swap the value
 * of two integers.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
