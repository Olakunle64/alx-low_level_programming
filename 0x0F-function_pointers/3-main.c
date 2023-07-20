#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument count
 *
 * Description: perform operation on two integers
 * Return: Always 0 Success
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0
			&& strcmp(argv[2], "*") != 0
			&& strcmp(argv[2], "/") != 0 && strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

