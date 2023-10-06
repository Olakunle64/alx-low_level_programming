#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *current;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			current = temp;
			temp = temp->next;
			free(current);
		}
	}
	free(ht);
}

