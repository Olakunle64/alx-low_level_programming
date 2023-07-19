#include "3-cal.h"
#include <stdio.h>

/**
 * get_op_func - pointer to a function
 * @s: argument of the function pointer
 * 
 * Description: this function is meant to point
 * to a function and also take a string as an argument
 * Return: return an integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 6)
	{
		if (strcmp(s, ops[
