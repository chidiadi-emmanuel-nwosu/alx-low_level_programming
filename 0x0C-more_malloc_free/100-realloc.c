/*
 * File: 100-realloc.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated 
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;
	
	if (new_size <= old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		char *cast = (char *)ptr;
		for (; i < old_size; i++)
			p[i] = cast[i];

		p = (void *)p;

		free(cast);

		return (p);
	}
	return (ptr);
}
