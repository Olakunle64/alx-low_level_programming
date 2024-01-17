#include "search_algos.h"
#include <math.h>


/*int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, i;

	if (!array)
		return (-1);
	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}*/

/**
 * exponential_search - search of a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of element in the array
 * @value: value to search for
 *
 * Description: the search method should use a exponential search
 * algorithm
 * Return: return the index where the value is located otherwise
 * return -1 if value is not present in the array or
 * when the array is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t n_pos = 1, f_pos = 1;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (n_pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n_pos, array[n_pos]);
		f_pos = n_pos;
		n_pos = n_pos * 2;
		if (n_pos >= size)
		{
			if (!(array[f_pos] < value && array[n_pos] >= value))
			{
				printf("Value found between indexes [%ld] and [%ld]\n", f_pos, size - 1);
				/*printf("Value checked array[%ld] = [%d]\n", f_pos, array[f_pos]);*/
				return (-1);
			}
			n_pos = size - 1;
		}
		if (array[f_pos] <= value && array[n_pos] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", f_pos, n_pos);
			return(binary_search(array, (n_pos - f_pos) + 1, value));
		}
	}
	return (-1);
}
