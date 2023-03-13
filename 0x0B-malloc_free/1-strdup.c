/*
 * File: 1-strdup.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 *           in memory, which contains a copy of the string
 *           given as parameter.
 * @str: input string
 *
 * Return: array pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int i = 0, j;
		char *ptr;

		while (*(str + i))
			i++;

		ptr = (char *)malloc(sizeof(char) * i + 1);
		if (ptr == NULL)
			return (NULL);

		for (j = 0; j < i; j++)
			*(ptr + j) = *(str + j);

		ptr[i] = '\0';

		return (ptr);
	}
}
