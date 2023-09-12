#include <stdio.h>

/**
 * main - print the largest prime number of a number
 *
 * Return: Always (0) Success
 */

int main(void)
{
	unsigned long int value = 1231952, i, j, k, max = 0;
	int flag;

	for (i = 2; i <= value; i++)
	{
		flag = 0;
		for (j = i, k = i; k <= value; k++)
		{
			if (j % k == 0 && k == j)
			{
				continue;
			}
			else if (j % k == 0)
				break;
			if (k > j)
				break;
		}
		if (flag == 1)
			continue;
		while (value % j == 0)
		{
			if (j > max)
				max = j;
			value = value / j;
		}
		if (value == 1)
			break;
	}
	printf("%lu\n", max);
	return (0);
}
