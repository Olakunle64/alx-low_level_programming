#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: string to print
 * @f: function pointer
 *
 * Description: this function is meant to print a name
 * with a function pointer.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
