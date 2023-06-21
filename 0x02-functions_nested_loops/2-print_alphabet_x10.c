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
	int i = 0;
	int j = 97;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
