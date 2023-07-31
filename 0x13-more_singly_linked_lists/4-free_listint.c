#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: double pointer to the first node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
