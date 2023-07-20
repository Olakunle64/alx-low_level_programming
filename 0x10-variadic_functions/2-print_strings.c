#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Description; This function is meant to print string to
 * stdout followed by a new line
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *current_string;

	if (n == 0)
	{

	}
	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		current_string = va_arg(str, char *);
		if (current_string == NULL)
			printf("(nil)");
		printf("%s", current_string);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(str);
}
