/*
 * File: 1-string_nconcat.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

unsigned int _strlen(char *);

/**
 * string_nconcat - concatenates two strings
 * @s1: base string
 * @s2: added string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to new address of the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len, len_s1, len_s2;
	char *ptr;

	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = _strlen(s1);
	if (s2 == NULL)
		len_s2 = 0;
	else
		len_s2 = _strlen(s2);

	if (n >= len_s2)
		len = len_s1 + len_s2;
	else
		len = len_s1 + n;
	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (; i < len; i++)
	{
		if (i < len_s1)
			*(ptr + i) = *(s1 + i);
		else
			*(ptr + i) = *(s2 + j++);
	}
	*(ptr + len) = '\0';
	return (ptr);
}

/**
 * _strlen - checks the length of a string
 * @str: input stirng
 *
 * Return: length of he string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (*(str + len))
		len++;
	return (len);
}
