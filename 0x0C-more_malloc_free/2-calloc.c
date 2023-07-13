#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of element of an array
 * @size: size of data type bytes
 *
 * Description: This function is meant to allocate memory for
 * an array using malloc.
 * Return: return NULL if nmemb or size is 0 or NULL if malloc
 * fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *byteptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr)
	{
		byteptr = (char *)ptr;
		for (i = 0; i < nmemb * size; i++)
		{
			byteptr[i] = 0;
		}
		return (ptr);
	}
	return (NULL);
}
