#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: argument
 *
 * Description: This function is meant to check for lowercase
 * character
 * Return: return 1 if the argument is lower case or
 * return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
