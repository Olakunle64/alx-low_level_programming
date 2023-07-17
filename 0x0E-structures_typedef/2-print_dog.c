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
	if (d)
	{
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
	}
}
