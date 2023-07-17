#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: structure of type struct dog
 *
 * Description: This function is meant to print all the
 * element of the struct dog d.
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (!(d->age))
		printf("(nil)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
