#include "lists.h"

/**
 * node_count - count the number of elements in a linked listint_t list
 * @h: head of the node
 *
 * Return: return the number of elements in a linked listint_t list
 */

unsigned int node_count(listint_t *h)
{
	unsigned int elem_count = 0;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}
	return (elem_count);
}

/**
 * get_nodeint_at_index - check for nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: nth postion to check
 *
 * Return: return nth node or NULL if the node doesn't exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n_count;
	listint_t *k_track;

	k_track = head;
	if (k_track == NULL)
		return (NULL);
	n_count = node_count(k_track);
	if (index > n_count)
		return (NULL);
	n_count = 0;
	while (n_count < index)
	{
		k_track = k_track->next;
		n_count++;
	}
	return (k_track);
}

