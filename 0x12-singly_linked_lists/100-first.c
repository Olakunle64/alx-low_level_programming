#include <stdio.h>
#include "lists.h"

void pre_print(void) __attribute__((constructor));
/**
 * pre_print - print a statement before the main is executed
 *
 * Return: void
 */

void pre_print(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upoin my back!\n");
}
