#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	new_bingo->name = malloc(strlen(name) * sizeof(char) + 1);
	if (new_bingo->name == NULL)
	{
		free(new_bingo);
		return (NULL);
	}
	strcpy(new_bingo->name, name);
	new_bingo->owner = malloc(strlen(owner) * sizeof(char) + 1);
	if (new_bingo->owner == NULL)
	{
		free(new_bingo);
		free(new_bingo->name);
		return (NULL);
	}
	strcpy(new_bingo->owner, owner);
	new_bingo->age = age;
	return (new_bingo);
}
