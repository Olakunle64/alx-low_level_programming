#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

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
				break;
			case 'i':
				i = va_arg(call, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(call, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(call, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		if (j != count - 1 && (format[j] == 'c' ||
			format[j] == 's' || format[j] == 'i' || format[j] == 'f'))
			printf(", ");
		j++;
	}
	putchar('\n');
	va_end(call);
}
