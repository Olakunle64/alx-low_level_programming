#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: double pointer to the first node
 *
 * Return: return a pointer to the first nodes.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	prevnode = NULL;
	current = *head;
	if (current->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = prevnode;
		prevnode = current;
		current = *head;
	}
	*head = prevnode;
	return (*head);
}
