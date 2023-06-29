#include "main.h"

/**
 * reverse_array - reverse the content on an array
 * @a: array
 * @n: number of elements of array
 *
 * Description: the function is meant to reverse the content
 * of an array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int store;

	for (i = 0; i < n / 2; i++)
	{
		store = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = store;
	}
	return (a);
}
