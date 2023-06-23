#include "main.h"

/**
 * print_line - draw a straight line
 * @n: argument
 *
 * Description: This function is meant to draw a
 * straight line followed by a new line.
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

