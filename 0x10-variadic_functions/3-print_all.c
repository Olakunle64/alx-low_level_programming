#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * space_comma - print a comma followed by a space
 * @j: first integer
 * @count: second integer
 *
 * Description: this function is meant to print a comma
 * followed by a space
 * Return: void
 */

void space_comma(int j, int count)
{
	if (j != count - 1)
	{
		putchar(',');
		putchar(' ');
	}
}

/**
 * print_all - print anything
 * @format: a list of types of arguments passed to the function
 *
 * Description: This function is meant to print anything inputed
 * by the user
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list call;
	char c, *s;
	int i, count = strlen(format), j = 0;
	float f;

	va_start(call, format);
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = (char)va_arg(call, int);
				printf("%c", c);
				space_comma(j, count);
				break;
			case 'i':
				i = va_arg(call, int);
				printf("%d", i);
				space_comma(j, count);
				break;
			case 'f':
				f = (float)va_arg(call, double);
				printf("%f", f);
				space_comma(j, count);
				break;
			case 's':
				s = va_arg(call, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				space_comma(j, count);
				break;
		}
		j++;
	}
	putchar('\n');
	va_end(call);
}
