#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: structure variable
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: this function is meant to initialize a variable
 * of type struct dog.
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
