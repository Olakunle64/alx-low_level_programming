#include <stdio.h>

/**
 * main - Entry point
 * Description: print a string to standard error without using the
 * printf or fprint function
 * Return: return 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (1);
}
