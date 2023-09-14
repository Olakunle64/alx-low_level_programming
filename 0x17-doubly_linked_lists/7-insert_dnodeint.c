#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - count the number of elements in a linked
 * dlistint_t list
 * @h: pointer to the first node
 *
 * Return: return the number of elements in it
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	current = (dlistint_t *)h;
	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: a double pointer to the first node
 * @idx: the index to add the new node
 * @n: value of the node.
 *
 * Return: return the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newnode, *store;
	size_t node_count = dlistint_len((const dlistint_t *)*h), i = 0;

	if (idx >= node_count)
		return (NULL);
	if ((h == NULL || *h == NULL) && idx == 0)
	{
		return (add_dnodeint(h, (const int)n));
	}
	if (idx == 0)
		return (add_dnodeint(h, (const int)n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;
	current = *h;
	while (i < idx - 1)
	{
		current = current->next;
		i++;
	}
	newnode->next = current->next;
	newnode->prev = current;
	store = current->next;
	current->next = newnode;
	store->prev = newnode;
	return (newnode);
}
