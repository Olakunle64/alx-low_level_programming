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

	if (key == NULL || value == NULL)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	current = ht->array[index];
	if (current == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, item->key) == 0)
		{
			strcpy(ht->array[index]->value, item->value);
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
