#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a structure of type dog_t
 * @d: structure of type dog_t
 *
 * Description: This function is meant to free the memory
 * allocated for the element in the structure.
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
