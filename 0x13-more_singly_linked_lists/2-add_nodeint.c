#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: double pointer to the first node
 * @n: integer
 *
 * Return: return the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
