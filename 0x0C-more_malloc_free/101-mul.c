/*
 * File: 101-mul.c
 * Author: Chidiadi E. Nwosu
 */


#include <stdlib.h>
#include "main.h"


void print(int, int *);
void error(void);
int _isdigit(int, char **);
void *chidi(unsigned int nmemb, unsigned int size);
int _strlen(char *);



/**
 * main - program that multiplies two positive numbers
 * @ac: number of command line arguments
 * @av: array of command line arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int i, j, l1, l2, len;
	int *num1, *num2, *ans;

	if (ac != 3 || _isdigit(ac, av))
	{
		error();
		exit(98);
	}

	l1 = _strlen(av[1]);
	l2 = _strlen(av[2]);
	len = l1 + l2;

	num1 = chidi(l1, sizeof(*num1));
	num2 = chidi(l2, sizeof(*num2));
	ans = chidi(len, sizeof(*ans));

	if (num1 == NULL || num2 == NULL || ans == NULL)
		return (-1);

	for (i = l1 - 1, j = 0; i >= 0; i--, j++)
		num1[j] = av[1][i] - '0';

	for (i = l2 - 1, j = 0; i >= 0; i--, j++)
		num2[j] = av[2][i] - '0';

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

	print(len, ans);

	return (0);
}



/**
 * error - prints error to standard output
 *
 * Return: void
 */
void error(void)
{
	int i = 0;
	char *e = "Error\n";

	while (e[i])
		_putchar(e[i++]);
}



/**
 * _isdigit - checks if all characters in an array is digit
 * @ac: number of arrays in av array
 * @av: array of arrays
 *
 * Return: 0 on success, 1 otherwise
 */
int _isdigit(int ac, char **av)
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
 * _strlen - checks the length of a string
 * @str: input string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}



/**
 * chidi - allocates memory for an array using malloc
 * @nmemb: size of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *chidi(unsigned int nmemb, unsigned int size)
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
 * print - print the value of int array to stdout
 * @len: length of array
 * @ptr: array pointer
 *
 * Return: void
 */
void print(int len, int *ptr)
{
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		if (ptr[i] != 0)
			break;
	}
	for (; i >= 0; i--)
		_putchar(ptr[i] + '0');
	_putchar('\n');
}
