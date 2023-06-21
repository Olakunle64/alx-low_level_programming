#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: argument
 *
 * Description: This function is meant to chek for alphabetic character
 * and return the appropriate value
 * Return: return 1 if c is a letter or 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
