#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the all alphabet excluding
 * q and e in lowercase, followed by a new line
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (!(i == 101 || i == 113))
		{
			putchar(i);
		}
	i++;
	}
	putchar('\n');
	return (0);
}
