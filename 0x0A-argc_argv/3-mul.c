#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Description: Your program should print the result of the
 * multiplication, followed by a new line
 * Return: return 1 if the program does not receive up to two argument
 * and print error
 */

int main(int argc, char **argv)
{
	int i;
	long int sum = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%ld\n", sum);
	return (0);
}
