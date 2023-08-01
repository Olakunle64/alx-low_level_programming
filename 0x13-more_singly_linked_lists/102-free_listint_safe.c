#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free a listint_t list
 * @h: double pointer to the first node
 *
 * Return: return the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *k_track, *temp;

	if (h == NULL)
		return (0);
	if (*h == NULL)
		return (0);
	k_track = *h;
	if (k_track->next == NULL)
	{
		free(k_track);
		return (1);
	}
	while (k_track != NULL)
	{
		temp = k_track;
		k_track = k_track->next;
		free(temp);
		count++;
	}
	*h = NULL;
	return (count);
}
