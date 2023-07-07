#include <stdio.h>

/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Description: print each argument it receives per line
 * Return: return an integer
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	putchar('\n');
	return (0);
}
