#include "main.h"
/**
 * print_times_table - print n times table
 * @n: argument
 *
 * Description: This function is meant to print n times
 * table starting with 0
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod, check_1, first_two, check_2;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod <= 9)
				_putchar(prod + '0');
			else if (prod < 100)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				first_two = (prod / 10);
				_putchar((first_two / 10) + '0');
				_putchar((first_two % 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				check_1 = i * (j + 1);
				if (!(check_1 > 99))
				{
					_putchar(' ');
					check_2 = i * (j + 1);
					if (!(check_2 > 9))
						_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
