#include "lists.h"

/**
 * sum_listint - sum of all the data(n) of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: the sum of all data(n) of a listint_t linked list or 0
 * if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
