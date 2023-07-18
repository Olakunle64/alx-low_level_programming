#include <stdio.h>

/**
 * main - print the name of the file
 *
 * Descripton: This program is meant to print the name
 * of the file it was compiled from followed by a newline
 * Return: Always (0) Success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
