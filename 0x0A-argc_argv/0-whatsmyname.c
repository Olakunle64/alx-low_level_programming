#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of argument
 * @argv: arguments
 *
 * Description: This program is meant to receive and print
 * the program name
 * Return: return an integer
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
