#include "search_algos.h"
#include <math.h>

/**
 * catch_index - catch the node with the target value
 * @n_pos: double pointer
 * @f_pos: double pointer
 * @value: the target value
 *
 * Return: return the pointer to the node with the
 * target value
 */

listint_t *catch_index(listint_t **n_pos, listint_t **f_pos, int value)
{
	printf("Value checked array[%ld] = [%d]\n", (*n_pos)->index, (*n_pos)->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
			(*f_pos)->index, (*n_pos)->index);
	while (*f_pos != *n_pos)
	{
		printf("Value checked array[%ld] = [%d]\n", (*f_pos)->index, (*f_pos)->n);
		if ((*f_pos)->n == value)
			return (*f_pos);
		*f_pos = (*f_pos)->next;
	}
	printf("Value checked array[%ld] = [%d]\n", (*n_pos)->index, (*n_pos)->n);
	if ((*n_pos)->n == value)
		return (*n_pos);
	return (NULL);
}

/**
 * jumper - jump nodes by length k
 * @head: pointer to the first node
 * @k: integer
 *
 * Return: return new position of the node
 */

listint_t *jumper(listint_t *head, int k)
{
	listint_t *temp = head;
	int i = 0;

	while (i < k && temp)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return:  return a pointer to the first node where value is located
 * OR If value is not present in head or if head is NULL,
 * your function must return NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int k;
	listint_t *f_pos, *n_pos, *temp, *store;

	if (!list)
		return (NULL);
	f_pos = n_pos = temp = list;
	k = sqrt(size);
	while (n_pos)
	{
		temp = f_pos;
		f_pos = n_pos;
		n_pos = jumper(n_pos, k);
		if (n_pos && f_pos->n < value && n_pos->n > value)
			return (catch_index(&n_pos, &f_pos, value));
		if (!n_pos)
		{
			store = f_pos;
			while (store)
			{
				temp = store;
				store = store->next;
			}
			printf("Value checked array[%ld] = [%d]\n", temp->index, temp->n);
			printf("Value found between indexes [%ld] and [%ld]\n",
					f_pos->index, temp->index);
			while (f_pos)
			{
				printf("Value checked array[%ld] = [%d]\n",
						f_pos->index, f_pos->n);
				f_pos = f_pos->next;
			}
			return (NULL);
		}
		printf("Value checked array[%ld] = [%d]\n", n_pos->index, n_pos->n);
	}
	return (NULL);
}
