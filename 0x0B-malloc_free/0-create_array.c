#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: char
 *
 * Description: This function is meant to create an array of char
 * and initializes it with a specific char(c).
 * Return: return NULL if size is 0 OR return a pointer to the
 * array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		return (s);
		free(s);
	}
	return (NULL);
}
