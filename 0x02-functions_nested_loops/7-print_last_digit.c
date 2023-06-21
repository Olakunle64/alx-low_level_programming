#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @a: argument
 *
 * Description: The function is meant to print the last
 * digit of a given number
 * Return: return 1 on success
 */
int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		i = a * -1;
		return (i % 10);
	}
	else
	{
		return (a % 10);
	}
}
