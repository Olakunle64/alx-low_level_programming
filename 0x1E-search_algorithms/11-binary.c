#include "search_algos.h"
#include <math.h>

/**
 * print_search - print the sub array been searched
 * @array: the pointer to the first element of the array
 * @start: first index of the array
 * @end: last index of the array
 *
 * Return: void.
 */

void print_search(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%d", array[i]);
		i++;
		if (i <= end)
			printf(", ");
		else
			putchar('\n');
	}
}

/**
 * binary_search - search for a value in a sorted array of integers
 * using Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: return the index where the value is located otherwise
 * return (-1) if the value is not present in the array or the array
 * is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	index = binary_recur(array, value, 0, size - 1);
	return (index);
}

/**
 * binary_recur - binary search an array for a value recursively
 * @array: the pointer to the first element in the array
 * @value: the value to search for
 * @start: the first index of the array
 * @end: the last index of the array
 *
 * Return: return the index of value
 */

int binary_recur(int *array, int value, int start, int end)
{
	size_t size, mid;

	if (start > end)
		return (-1);
	print_search(array, start, end);
	if (array[start] == value)
		return (start);
	size = end - start;
	mid = start + (size / 2);
	if (array[mid] > value)
	{
		end = mid - 1;
	}
	else
	{
		if (array[mid] == value)
			return (mid);
		start = mid + 1;
	}
	start = binary_recur(array, value, start, end);
	return (start);
}

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
			/*return(binary_search(array, (n_pos - f_pos) + 1, value));*/
			return (binary_recur(array, value, f_pos, n_pos));
		}
	}
	return (-1);
}
