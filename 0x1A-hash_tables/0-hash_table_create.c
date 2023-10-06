#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: return a pointer to the newly created hash
 * table or NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * table->size + 1);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
