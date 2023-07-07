#include "main.h"

/**
 * prime_cheat - a checker for a prime number
 * @n: potential prime number
 * @i: variable for checking if the potential prime number will
 * finally become a prime number
 *
 * Description: This function is meant to check if a number is a prime number
 * Return: return 0 if the number is not a prime number or 1 if the
 * number is a prime number.
 */

int prime_cheat(int n, int i)
{
	if (n % i == 0 && i < n)
		return (0);
	if (i == n)
		return (1);
	return (prime_cheat(n, i + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 * @n: potential prime number
 *
 * Description: This function is meant to check if a number is a prime number
 * Return: return 0 if the number is not a prime number or 1 if the number
 * is not a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_cheat(n, 2));
}
