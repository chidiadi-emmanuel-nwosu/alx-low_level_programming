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

	while(*(str + i))
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
	int i;
	int j = 0;
	int k = 0;
	int l = _strlen(s1) + _strlen(s2);
	char *ptr;

	ptr = (char *)malloc(l + 1);
	if (ptr == 0)
		return (0);

	for (i = 0; i < l; i++)
	{
		if (s1[j])
			ptr[i] = s1[j++];
		else
			ptr[i] = s2[k++];
	}
	ptr[l] = '\0';
	return (ptr);
}
