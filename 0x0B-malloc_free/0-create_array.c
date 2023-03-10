/*
 * File: 0-create_array.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 *                initializes it with a specific char.
 * @size: size of the array to be creted
 * @c: specific character
 *
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i = 0;
		char *ptr = (char *)malloc(sizeof(char) * size);

		if (ptr == NULL)
			return (NULL);
		while (i < size)
			*(ptr + i++) = c;
		return (ptr);
	}
}
