#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers
 * @n: argument
 *
 * Description: prints all natural numbers from n to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (!(n <= 98))
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
		putchar('\n');
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (!(n >= 98))
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');
	}
}
