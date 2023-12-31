#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals
 * @a: array of integers
 * @size: size of the array
 *
 * Description: prints the sum of the two diagonals of a square
 * matrix of integers
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if ((i % (size - 1) == 0) && (i != 0) && (i != (size - 1) * (size + 1)))
			sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
