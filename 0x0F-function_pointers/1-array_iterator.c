#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - execute a function given as a parameter
 * @size: size of the array
 * @array: array name
 * @action: function pointer
 *
 * Description: This function is meant to execute a function given
 * as a parameter on each element of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
