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
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}
