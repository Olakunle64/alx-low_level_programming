#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * __exit - terminate a program if the argument is NULL
 * @format: the argument
 *
 * Return: void
 */

void __exit(const char * const format)
{
	if (format == NULL)
	{
		putchar('\n');
		exit(EXIT_FAILURE);
	}
}

/**
 * print_a_string - print a string to stdout
 * @s: string
 *
 * Return: void
 */

void print_a_string(char *s)
{
	(s) ? printf("%s", s) : printf("(nil)");
}

/**
 * print_new_line - print a newline base on a condition
 * @count: integer
 *
 * Return: void
 */

void print_new_line(int count)
{
	while (count > 0)
	{
		putchar('\n');
		break;
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
	int i, count, j = 0;
	float f;

	__exit(format);
	count = strlen(format);
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
				print_a_string(s);
			default:
				k++;
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
