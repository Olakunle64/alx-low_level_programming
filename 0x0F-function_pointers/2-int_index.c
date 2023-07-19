#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search for an integer
 * @array: array name
 * @size: number of element of the array
 * @cmp: function pointer to be used to compare values
 *
 * Description: This function is meant to search for an integer
 * Return: return an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	
