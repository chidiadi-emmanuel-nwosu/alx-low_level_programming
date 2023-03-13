/*
 * File: 100-argstostr.c
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
	return (i + 1);
}



/**
 * atgstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int k = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	printf("len: %i\n", len);
	ptr = (char *)malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	printf("size of ptr: %i\n", _strlen(ptr));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			ptr[k++] = av[i][j];
		ptr[k++] = '\n';
	}
	ptr[len] = '\0';

	return (ptr);
}
