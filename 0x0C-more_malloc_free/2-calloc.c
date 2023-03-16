/*
 * File: 2-calloc.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: size of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
