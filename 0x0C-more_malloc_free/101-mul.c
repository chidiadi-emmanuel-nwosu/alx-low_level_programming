/*
 * File: 101-mul.c
 * Author: Chidiadi E. Nwosu
 */


#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
 * main - program that multiplies two positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j, len, l1, l2;
	int *num1, *num2, *ans;

	if (argc != 3 || check_dig(argc, argv))
	{
		printf("Error\n");
		exit(98);
	}

	l1 = check_len(argv[1]);
	l2 = check_len(argv[2]);
	len = l1 + l2;
	num1 = _calloc(l1, sizeof(*num1));
	num2 = _calloc(l2, sizeof(*num2));
	ans = _calloc(len, sizeof(*ans));
	if (num1 == NULL || num2 == NULL || ans == NULL)
		exit(98);

	for (i = l1 - 1, j = 0; i >= 0; i--, j++)
		num1[j] = argv[1][i] - '0';
	for (i = l2 - 1, j = 0; i >= 0; i--, j++)
		num2[j] = argv[2][i] - '0';

	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < l2; j++)
			ans[i + j] += num1[i] * num2[j];
	}

	for (i = 0; i < len - 1; i++)
	{
		int tmp = ans[i] % 10;

		ans[i + 1] += ans[i] / 10;
		ans[i] = tmp;
	}
	output(len, ans);
	return (0);
}



/**
 * check_dig - checks if all characters in an array is digit
 * @ac: number of arrays in av array
 * @av: array of arrays
 *
 * Return: 0 on success, 1 otherwise
 */
int check_dig(int ac, char **av)
{
	int i = 1;

	for (; i < ac; i++)
	{
		int j = 0;

		for (; av[i][j] != 0; j++)
		{
			if (!(av[i][j] >= 48 && av[i][j] <= 57))
				return (1);
		}
	}
	return (0);
}



/**
 * check_len - checks the length of a string
 * @str: input string
 *
 * Return: length of the string
 */
int check_len(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}



/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: size of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	ptr = (void *)ptr;

	return (ptr);
}



/**
 * output - prints to stdout
 * @len: length of array
 * @ptr: array pointer
 *
 * Return: void
 */
void output(int len, int *ptr)
{
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		if (ptr[i] != 0 || i == 0)
			break;
	}
	for (; i >= 0; i--)
		_putchar(ptr[i] + '0');

	_putchar('\n');
}
