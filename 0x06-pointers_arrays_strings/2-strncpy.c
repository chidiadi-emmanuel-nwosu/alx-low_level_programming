/*
 * File: 2-strncpy.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies strings
 * @dest: destination string
 * @src: source string
 * @n: bytes from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
