#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - print a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: return the number of nodes in the list
 * or exit with 98 if the function fails
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *k_track;
	size_t count;

	if (head == NULL)
		exit(98);
	k_track = head;
	while (k_track != NULL)
	{
		printf("[%p] %d", (void *)k_track->next, k_track->n);
		k_track = k_track->next;
		count++;
	}
	return (count);
}
