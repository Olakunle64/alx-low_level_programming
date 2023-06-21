#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabets
 * Description: print 10 times the alphabets in lowercase
 * followed by a new line with the function _putchar that
 * can only print a letter to stdout at once.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int j = 97;

	while (i <= 10)
	{
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
