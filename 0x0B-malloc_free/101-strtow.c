/*
 * File: 101-strtow.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: void
 */
char **strtow(char *str)
{
	char **ptr;
	int i, j = 0, row = 0, col, width = 0, height = 0;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	}
	if (str == NULL || height == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (height + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			width++;
		if ((i > 0 && str[i] == ' ' && str[i - 1] != ' ') ||
				(str[i] != ' ' && str[i + 1] == '\0'))
		{
			ptr[row] = malloc(sizeof(char) * width + 1);
			if (ptr[row] == NULL)
			{
				for (; row >= 0; row--)
					free(ptr[row]);
				free(ptr);
				return (NULL);
			}
			col = 0;
			for (j = i - width; j < i; j++)
				ptr[row][col++] = str[j];
			ptr[row][col] = '\0';
			row++;
			width = 0;
		}
	}
	ptr[row] = NULL;
	return (ptr);
}
