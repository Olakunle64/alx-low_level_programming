#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a
 * dlistint_t list
 * @head: a double pointer to the first node
 * @n: integer variable
 *
 * Return: return the address of the new element or
 * NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	if (head == NULL || *head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}


