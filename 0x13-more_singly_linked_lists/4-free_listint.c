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
	listint_t *k_track;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		k_track = head;
		head = head->next;
		free(k_track);
	}
}
