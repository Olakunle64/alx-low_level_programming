#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - count the number of elements in a linked
 * dlistint_t list
 * @h: pointer to the first node
 *
 * Return: return the number of elements in it
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	current = (dlistint_t *)h;
	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}

/**
 * delete_dnodeint_at_index - delete the node at index
 * index of a dlistint_t linked list
 * @head: double pointer to the first node
 * @index: index of the node to be deleted
 *
 * Return: -1 if it failed or 1 if it is successful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	size_t node_count = dlistint_len((const dlistint_t *)*head), i = 0;

	if (index >= node_count || head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	if (index == node_count - 1)
	{
		while (i < index - 1)
		{
			current = current->next;
			i++;
		}
		temp = current->next;
		current->next = NULL;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		current = current->next;
		i++;
	}
	temp = current->next;
	current->next = current->next->next;
	current->next->next->prev = current;
	free(temp);
	return (1);
}
