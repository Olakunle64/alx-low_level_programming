#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: integer variable
 *
 * Description: This function is meant to calculate the factorial
 * of a given number
 * Return: return the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
