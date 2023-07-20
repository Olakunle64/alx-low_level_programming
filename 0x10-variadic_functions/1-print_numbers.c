#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - print number followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Desccription: This function is meant to print number
 * followed by a new line
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	if (n == 0)
		exit(EXIT_FAILURE);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(num);
}
