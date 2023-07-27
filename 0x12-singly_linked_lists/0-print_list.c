#include "main.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: a pointer to the first node
 *
 * Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
