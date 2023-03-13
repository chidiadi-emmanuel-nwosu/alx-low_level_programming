/*
 * File: 2-str_concat.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - checks the length of a string
 * @str: input string
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}


/**
 * str_concat - concatenates two strings
 * @s1: base string
 * @s2: concat string
 *
 * Return: array pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, k = 0, l;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		l = 0;
	else if (s1 == NULL)
		l = _strlen(s2);
	else if (s2 == NULL)
		l = _strlen(s1);
	else
		l = _strlen(s1) + _strlen(s2);

	ptr = (char *)malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (s1 != NULL && s1[j])
			ptr[i] = s1[j++];
		else if (s2 != NULL && s2[k])
			ptr[i] = s2[k++];
	}
	ptr[l] = '\0';
	return (ptr);
}
