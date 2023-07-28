#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: a pointer to a list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		exit(0);
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
