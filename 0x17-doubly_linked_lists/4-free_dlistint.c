#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: a pointer to the first node
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *post, *pre;

	if (head == NULL)
		return;
	post = head;
	while (post != NULL)
	{
		pre = post;
		post = post->next;
		free(pre);
	}
}
