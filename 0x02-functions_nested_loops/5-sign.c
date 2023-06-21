#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: argument
 *
 * Description: print the sign of a given number and
 * return the appropriate value.
 * Return: return 1 for positive number, 0 for zero
 * and -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
