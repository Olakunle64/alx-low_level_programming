#include "main.h"

/**
 * _sqrt_cheat - find the square root of a given number(n)
 * @n: the number
 * @i: the square root
 *
 * Description: This function is meant to find the square root of a given
 * number with the use of two parameters
 * Return: return -1 if there is no square root for that number
 * or the square root of the number.
 */

int _sqrt_cheat(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_cheat(n, i + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: The given number
 *
 * Description: This function is meant to find natural square root
 * of a number
 * Return: return the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_cheat(n, 2));
}
