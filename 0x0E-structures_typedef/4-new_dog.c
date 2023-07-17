#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: This function is meant to create a new dog
 * of type dog_t
 * Return: return a pointer of type dog_t or NULL if the
 * function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_bingo;

	new_bingo = malloc(sizeof(dog_t));
	if (new_bingo == NULL)
		return (NULL);
	new_bingo->name = name;
	new_bingo->age = age;
	new_bingo->owner = owner;
	return (new_bingo);
}
