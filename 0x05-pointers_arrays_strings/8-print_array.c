#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: array name
 * @n: arrray size
 *
 * Description: This function is meant to print n elements of an array
 * of integers followed by a new line.
 * Return: void
 */
void print_array(int *a, int n)
{
	signed long long int i;

	for (i = 0; i < n; i++)
	{
		printf("%ld", a[i]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
