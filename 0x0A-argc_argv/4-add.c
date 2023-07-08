#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - convert a character to a string
 * @c: character
 *
 * Description: This function is meant to convert a character to a string
 * Return: return 0 is the ascii value of the character is is between
 * 1 and 9 or return the ascii value of the character.
 */

int _atoi(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (c);
	}
	else
	{
		return (0);
	}
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Description: This program is meant to add all argument it receives
 * together excluding the program name
 * Return: If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1.
 */

int main(int argc, char **argv)
{
	int i;
	size_t j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if ((_atoi(argv[i][j]) >= 48) && (_atoi(argv[i][j]) <= 57))
			{

			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
