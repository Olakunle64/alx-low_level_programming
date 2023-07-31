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

	k_track = head;
	if (k_track == NULL)
		return;

	while (k_track != NULL)
	{
		free(k_track);
		k_track = k_track->next;
	}
}
