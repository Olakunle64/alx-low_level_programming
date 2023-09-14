#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all the element of a dlistint_t list
 * @h: a pointer to the first node
 *
 * Return: return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	current = (dlistint_t *)h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
