#include "main.h"

/**
 * print_square - print a square
 * @size: argument
 *
 * Description: print a square on the terminal followed
 * by a new line
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
