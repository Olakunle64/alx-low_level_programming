#include "search_algos.h"

/**
 * linear_search - search of a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of element in the array
 * @value: value to search for
 *
 * Description: the search method should use a linear search
 * algorithm
 * Return: return the index where the value is located otherwise
 * return -1 if value is not present in the array or
 * when the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		if (i + 1 < size)
		{
			i += 1;
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
			{
				return (i);
			}
		}
		i += 1;
	}
	return (-1);
}
