#include <stdio.h>
#include "main.h"

/**
 * print_number - print integers
 * @n: integer variable
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m < 10)
	{
		_putchar(m + '0');
		return;
	}
	print_number(m / 10);
	_putchar((m % 10) + '0');
}
