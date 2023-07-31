#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: double pointer to the first node
 * @n: integer
 *
 * Return: return the address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *k_track;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	k_track = *head;
	while (k_track->next != NULL)
	{
		k_track = k_track->next;
	}
	k_track->next = newnode;
	return (newnode);
}
