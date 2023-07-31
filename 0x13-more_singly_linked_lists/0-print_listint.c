#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - print all the element of a list
 * @h: head of the list
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_count++;
		h = h->next;
	}
	return (n_count);
}
