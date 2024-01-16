#include "search_algos.h"
int binary_recur(int *array, int value, int start, int end);

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

	if (array == NULL || size == 0)
		return (-1);
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

	print_search(array, start, end);
	if (array[start] == value)
		return (start);
	if (start == end)
		return (-1);
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
