/*
 * File: 101-strtow.c
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
 * _strip - removes unwanted white spaces
 * @str: input string
 * @size: length of input string
 *
 * Return: pointer to copy of input string without spaces
 */
char *_strip(char *str, int size)
{
	int i, j = 0;
	char *ptr = (char *)malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i == 0 && *(str + i) == ' ')
			continue;
		if (*(str + i) == ' ' && *(str + i - 1) == ' ')
			continue;
		*(ptr + j) = *(str + i);
		j++;
	}
	if (*(ptr + j - 1) != ' ')
		*(ptr + j) = '\0';
	else
		*(ptr + j - 1) = '\0';

	return (ptr);
}


/**
 * check_height - checks the height of 2D array
 * @str: input string
 *
 * Return: height of the array
 */
int check_height(char *str)
{
	int i = 0, j = 0;

	while (*(str + i))
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	return (j + 1);
}

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: void
 */
char **strtow(char *str)
{
	char **p;
	char *ptr;
	int i, j = 0, k = 0, len, height;

	ptr = _strip(str, _strlen(str));
	len = _strlen(ptr);
	height = check_height(ptr);
	p = malloc(sizeof(*p) * height + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		k++;
		if (ptr[i] == ' ' || i == len)
		{
			int l, m = 0;

			p[j] = malloc(sizeof(char) * k);
			if (p[j] == NULL)
			{
				for (; j >= 0; j--)
					free(p[j]);
				free(p);
				return (NULL);
			}
			else
			{
				for (l = (i + 1 - k); l < i; l++)
					p[j][m++] = ptr[l];
				p[j][l] = '\0';
			}
			j++;
			k = 0;
		}
	}
	p[j] = NULL;
	free(ptr);
	return (p);
}
