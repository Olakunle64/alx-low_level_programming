#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: argument
 *
 * Description: Draw a diagonal line on the terminal followed by
 * a new line
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
