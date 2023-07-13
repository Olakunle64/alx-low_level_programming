#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: previously allocated space
 * @old_size: old size of the previously allocated space
 * @new_size: new size of the newly allocated space
 *
 * Description: This function is meant to reallocate a memory block
 * using malloc and free
 * Return: return ptr if new_size equal to old_size or return NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		new_block = malloc(new_size);
		if (new_block)
		{
		return (new_block);
		}
		return (NULL);
	}
	new_block = malloc(new_size);
	if (!new_block)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	memcpy(new_block, ptr, old_size);
	free(ptr);
	return (new_block);
}



