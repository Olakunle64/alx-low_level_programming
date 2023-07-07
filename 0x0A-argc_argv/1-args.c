#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of argument
 * @argv: arguments
 *
 * Description: This program is meant to print the number of arguments
 * passed.
 * Return: return an integer
 */

int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
