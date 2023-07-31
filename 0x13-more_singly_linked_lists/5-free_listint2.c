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
	listint_t *k_track, *temp;

	if (*head == NULL)
		return;
	k_track = *head;
	while (k_track != NULL)
	{
		temp = k_track;
		k_track = k_track->next;
		free(temp);
	}
	*head = NULL;
}
