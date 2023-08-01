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

	if (head == NULL)
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

	if (head == NULL)
		return (NULL);
	k_track = *head;
	n_count = node_count(k_track);
	if (idx > n_count)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	n_count = 0;
	while (n_count < idx)
	{
		temp = k_track;
		k_track = k_track->next;
		n_count++;
	}
	newnode->next = k_track;
	temp->next = newnode;
	return (newnode);
}
