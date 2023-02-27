/*
 * File: 9-strcpy.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
		return (NULL);

	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}

	*dest = '\0';

	return (dest);
}
