#include <stdio.h>

/**
 * main - Entry point
 * Description: print a number from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead of the number and
 * for multiples of five print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz.
 * Return: Always (0) Success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
