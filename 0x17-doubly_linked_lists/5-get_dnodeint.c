#include <stdio.h>
#include "lists.h"

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
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 * @head: a pointer to the first node
 * @index: index of the node to get starting from 0
 *
 * Return: return the node at index or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t node_count = dlistint_len((const dlistint_t *)head), i = 0;

	if (index >= node_count || head == NULL)
		return (NULL);
	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}

