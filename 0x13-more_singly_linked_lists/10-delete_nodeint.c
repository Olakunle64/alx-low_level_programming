#include "lists.h"
#include <stdlib.h>
unsigned int node_count(listint_t *h);

/**
 * delete_nodeint_at_index - delete the node at index index of a listint_t
 * linked list.
 * @head: double pointer to the first node
 * @index: position of the node to be deleted
 *
 * Return: return 1 if it succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n_count;
	listint_t *k_track, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	k_track = *head;
	if (index == 0)
	{
		*head = k_track->next;
		free(k_track);
		return (1);
	}
	n_count = node_count(k_track);
	if (index > n_count)
		return (-1);
	n_count = 0;
	while (n_count < index)
	{
		temp = k_track;
		k_track = k_track->next;
		n_count++;
	}
	if (k_track->next == NULL)
	{
		free(k_track);
		temp->next = NULL;
		return (1);
	}
	temp->next = k_track->next;
	free(k_track);
	return (1);
}

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
