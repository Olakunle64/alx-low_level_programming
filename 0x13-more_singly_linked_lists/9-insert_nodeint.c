#include "lists.h"
#include <stdlib.h>

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
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to the first node
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer
 *
 * Return:  the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n_count;
	listint_t *k_track, *newnode, *temp;

	k_track = *head;
	if (k_track == NULL)
		return (NULL);
	n_count = node_count(k_track);
	if (idx > n_count)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		*head = newnode;
		newnode = NULL;
		return (newnode);
	}
	n_count = 0;
	while (n_count <= idx)
	{
		k_track = k_track->next;
		if (n_count <= idx - 2)
			temp = k_track;
		n_count++;
	}
	newnode->next = k_track;
	temp->next = newnode;
	return (newnode);
}


