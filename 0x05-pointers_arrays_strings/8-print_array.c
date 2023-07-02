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
	int i;

	if (n <= 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%ld", a[i]);
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	_putchar('\n');
}
