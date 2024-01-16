#include "search_algos.h"

/**
 * linear_search - search of a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of element in the array
 * @value: value to search for
 *
 * Description: the search method should use a linear search
 * algorithm
 * Return: return -1 if value is not present in the array or
 * array is NULL otherwise return (0) success.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
