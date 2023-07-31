#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: double pointer to the first node
 *
 * Return: return the head node's data(n) or 0 if linked list
 * is empty.
 */

int pop_listint(listint_t **head)
{
	int store;
	listint_t *k_track;

	k_track = *head;
	if (k_track == NULL)
		return (0);
	store = k_track->n;
	*head = k_track->next;
	free(k_track);
	return (store);
}

