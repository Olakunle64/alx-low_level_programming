#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base10
 * starting from 0, followed by a new line
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar ('\n');
	return (0);
}
