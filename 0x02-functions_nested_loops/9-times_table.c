#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description - This function is meant to print the
 * 9 times table starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int prod, check;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod <= 9)
			{
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				check = i * (j + 1);
				if (!(check > 9))
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
