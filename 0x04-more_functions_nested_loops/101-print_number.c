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
	unsigned m = n;

	if (m < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m < 10)
	{
		_putchar(m + '0');
		return;
	}
	print_number(m / 10);
	_putchar((m % 10) + '0');
}
