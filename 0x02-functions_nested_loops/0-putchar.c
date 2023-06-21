#include "main.h"
/**
 * main - Entry point
 * Description: print a string by using a function that
 * only print one character at a time
 * Return: Always (0) Success
 */
int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
