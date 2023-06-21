#include "main.h"
/**
 * print_alphabet - print all alphabets in lowercase
 * Description: The function is meant to print all alphabets
 * in lowercase letter using the function _putchar which can
 * only print a letter at once
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
