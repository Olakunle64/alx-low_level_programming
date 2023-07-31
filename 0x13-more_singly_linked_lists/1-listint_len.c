#include "lists.h"

/**
 * listint_len - count the number of elements in a linked listint_t list
 * @h: head of the node
 *
 * Return: return the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elem_count = 0;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}
	return (elem_count);
}
