#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: argument
 *
 * Description: This function is meant to check for uppercase
 * character and return the appropriate value
 * Return: return 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
