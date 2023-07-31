#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t list and set head to NULL
 * @head: double pointer to the first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *k_track;

	k_track = *head;
	if (k_track == NULL)
		return;
	while (k_track != NULL)
	{
		free(k_track);
		k_track = k_track->next;
	}
	*head = NULL;
}
