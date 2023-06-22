#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i, mod_3, mod_5;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		mod_3 = i % 3;
		mod_5 = i % 5;
		if ((mod_3 == 0) || (mod_5 == 0))
		{
			sum = sum + 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
