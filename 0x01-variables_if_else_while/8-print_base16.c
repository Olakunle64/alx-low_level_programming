#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all number of base 16 in
 * lowercase, followed by a new line
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	i = 97;
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
