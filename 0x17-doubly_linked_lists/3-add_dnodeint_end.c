#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a newnode at the end of a dlistint_t list
 * @head: a double pointer to the first node
 * @n: the value in the node
 *
 * Return: return the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	if (head == NULL || *head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newnode;
	newnode->prev = current;
	return (newnode);
}
