#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiply two positive integer
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always(0) on success
 */

int main(int argc, char **argv)
{
	int i;
	unsigned long mul = 1, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{

			}
			else
			{
				printf("Error\n");
				exit(98);
			}
		}
		mul *= atoi(argv[i]);
	}
	printf("%lu\n", mul);
	return (0);
}
