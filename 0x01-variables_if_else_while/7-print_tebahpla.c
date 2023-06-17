#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowercase letter in reverse
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
