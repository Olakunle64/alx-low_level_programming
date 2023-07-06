#include "main.h"

/**
 * _pow_recursion - calculate the value of x raised to the power of y
 * @x: first variable
 * @y: second variable(power)
 *
 * Description: This function is meant to calculate the value of x raised
 * to power of y.
 * Return: return the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
