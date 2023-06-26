#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string
 *
 * Description: This function is meant to print every other character
 * of a string starting with the first character followed by a new line
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	if (str[i] == '\0')
	{

	}
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
