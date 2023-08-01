#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: double pointer to the first node
 *
 * Return: return a pointer to the first nodes.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	if (head == NULL || *head == NULL)
		return (NULL);
	prevnode = 0;
	nextnode = *head;
	if (nextnode->next == NULL)
		return (nextnode);
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
	}
	*head = prevnode;
	return(*head);
}
