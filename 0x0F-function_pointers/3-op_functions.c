#include <stdio.h>
#include "3-cal.h"

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: This function is meant to add up two integers
 * Return: return the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find the difference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: This fucntion is meant to find the difference
 * between two integers
 * Return: return the difference of a and b
 */

int op_sub(int a, int b);
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: This function is meant to multiply two integers
 * Return: return the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide one integer by the other
 * @a: first integer
 * @b: second integer
 *
 * Description: This function is meant to find divide one integer
 * by the other.
 * Return: return the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of the division of a and b
 * @a: first integer
 * @b: second integer
 *
 * Description: This function is meant to find the remainder of the
 * division of a and b
 * Return: return the remainder of division
 * of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}use != 0 instead of > 0

