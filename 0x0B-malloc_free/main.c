#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - concatenate all arguments of a program
 * @argc: number of argument
 * @argv: argument vector
 *
 * Return: return 0
 */

int main(int argc, char **argv)
{
	long unsigned int j, k;
	int i;
	char a[50];

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); k++, j++)
		{
			a[k + j] = argv[i][j];
		}
	}
	a[k + j] = '\0';
	printf("%s", a);
	return (0);
}

