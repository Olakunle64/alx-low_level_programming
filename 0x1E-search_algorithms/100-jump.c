#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search of a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of element in the array
 * @value: value to search for
 *
 * Description: the search method should use a jump search
 * algorithm
 * Return: return the index where the value is located otherwise
 * return -1 if value is not present in the array or
 * when the array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t n_pos = 0, f_pos = 0, k;

	if (!array)
		return (-1);
	k = sqrt(size);
	while (n_pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n_pos, array[n_pos]);
		f_pos = n_pos;
		n_pos = n_pos + k;
		if (n_pos >= size)
		{
			if (!(array[f_pos] <= value && value <= array[n_pos]))
			{
				printf("Value found between indexes [%ld] and [%ld]\n", f_pos, n_pos);
				while (f_pos < size)
				{
					printf("Value checked array[%ld] = [%d]\n", f_pos, array[f_pos]);
					f_pos++;
				}
				return (-1);
			}
			n_pos = size - 1;
		}
		if (array[f_pos] <= value && value <= array[n_pos])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", f_pos, n_pos);
			while (f_pos <= n_pos)
			{
				printf("Value checked array[%ld] = [%d]\n", f_pos, array[f_pos]);
				if (array[f_pos] == value)
					return (f_pos);
				f_pos++;
			}
		}
	}
	return (-1);
}
