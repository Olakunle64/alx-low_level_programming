#include <stdio.h>
#include "hash_tables.h"

/**
 * handle_collision - to handle collision
 * @item: the item
 * @old_item: old item
 * 
 * Return: return the updated table
 */

void handle_collision(hash_node_t **old_item, hash_node_t *item)
{
	item->next = *old_item;
	*old_item = item;
}
/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value
 *
 * Return: return 1 if it succeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL || *key == '\0')
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	item->key = strdup(key);
	item->value = strdup(value);
	current = ht->array[index];
	if (current == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(current->key, item->key) == 0)
		{
			if (item->value != NULL)
				strcpy(current->value, value);
			free(item->value);
			free(item->key);
			free(item);
		}
		else
		{
			handle_collision(&(ht->array[index]), item);
		}
		return (1);
	}
	return (0);
}
