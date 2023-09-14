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
