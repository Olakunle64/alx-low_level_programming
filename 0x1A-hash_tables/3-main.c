#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int i;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "observe");
    hash_table_set(ht, "mentioner", "collide");
    hash_table_set(ht, "salay", "kunle");
    hash_table_set(ht, "adeshina", "sefiu");
    for (i = 0; i < ht->size; i++)
    {
	    if (ht->array[i] != NULL)
	    {
	    	printf("key: %s------value: %s\n", ht->array[i]->key, ht->array[i]->value);
		if (ht->array[i]->next != NULL)
			printf("key: %s------value: %s\n", ht->array[i]->next->key, ht->array[i]->next->value);
	    }
	    	
    }
    return (EXIT_SUCCESS);
}
