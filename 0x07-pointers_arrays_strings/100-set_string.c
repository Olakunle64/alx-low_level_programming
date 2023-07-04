#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: double pointer
 * @to: the string to copy
 *
 * Description: This function is meant to set the value of
 * a pointer to a the string to.
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
