#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * separated with comma and space
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
