#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: double pointer or address of a pointer
 * @str: string to be duplicated
 *
 * Return: return the address of a new element or node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
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
	new_node->next = NULL;
	current = *head;
	if (current == NULL)
	{
		current = new_node;
		*head = current;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
