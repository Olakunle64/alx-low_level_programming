#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - compute the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: return the index at which the key/value
 * pair should be stored in the array of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
