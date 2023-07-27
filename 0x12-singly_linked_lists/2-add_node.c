#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: string to be duplicated
 *
 * Return: return the address of the new element(node) or
 * NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int string_len = strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = string_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
