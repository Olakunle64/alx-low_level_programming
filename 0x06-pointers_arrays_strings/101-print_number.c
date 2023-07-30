#include "main.h"

/**
 * print_int - subfuction to print an integer
 * @num: unsigned integer
 *
 * Return: void
 */

void print_int(unsigned int num)
{
	if (num < 10)
	{
		_putchar(num % 10 + '0');
		return;
	}
	print_int(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_number - print an integer
 * @n: integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int m;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		m = (unsigned int)(n * -1);
	}
	else
		m = n;
	print_int(m);
}
