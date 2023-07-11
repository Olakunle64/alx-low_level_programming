#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count the number of character in a string
 * @s: string
 *
 * Description: This function is meant to count the number
 * of character in a string
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * array_len - similar to _strlen
 * @av: double pointer
 * @ac: number of the array
 *
 * Description: count the number of character in each array
 * and sum them up
 * Return: return the total length of all the array
 */

int array_len(int ac, char **av)
{
	int i, j, total_length;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			total_length++;
		}
	}
	return (total_length);
}

/**
 * string_concat - concatenate all the content of an arrays into a single array
 * @str: double pointer
 * @new_array: new array
 * @ac: number of all the arrays to be copied
 *
 * Description: This function is meant to concatenate all the character in
 * each array into a new array.
 * Return: return a pointer to the new array.
 */

char *string_concat(int ac, char *new_array, char **str)
{
	int i, j;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(str[i]); j++)
		{
			new_array[i + j] = str[i][j];
		}
	}
	return (new_array);
}

/**
 * free_d_array - free all spaces allocated for a double pointer
 * @ac: number of string
 * @str: double pointer
 *
 * Description: free all spaces allocated for a double pointer in the
 * memory
 * Return: void.
 */

void free_d_array(int ac, char **str)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		free(str[i]);
	}
	free(str);
}

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Description: This function is meant to concatenate all the
 * arguments of the program and each argument should be followed
 * by a \n in the new string.
 * Return: return NULL if ac == 0 || av == NULL or NULL if it fails
 * or pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	new_string = malloc(array_len(ac, av) * sizeof(char) + ac);
	if (new_string)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < _strlen(av[i]); j++)
			{
				new_string[i + j] = av[i][j];
			}
			new_string[i + j] = '\n';
		}
		return (new_string);
	}
	return (NULL);
}
