#include "main.h"

/**
 * str_length_recursion - count the number of characters in astring
 * @s: string
 *
 * Description: This function is meant to count the numbers of characters
 * in a given string
 * Return: return the length of the string
 */

int str_length_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length_recursion(s + 1));
}

/**
 * is_palindrome_cheat - remove the beginning and the last character
 * @s: string
 * @start: first integer
 * @end: second integer
 *
 * Description: this function is meant remove the first and last character
 * Return: return 0 or 1
 */

int is_palindrome_cheat(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (*(s + start) != *(s + end))
		return (0);
	return (is_palindrome_cheat(s, start + 1, end - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 *
 * Description: check if a string is equal when read at both ends
 * Return: return 1 if it is equal or 0 if it is not.
 */

int is_palindrome(char *s)
{
	int length = str_length_recursion(s);

	return (is_palindrome_cheat(s, 0, length - 1));
}
