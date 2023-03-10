/*
 * File: 4-add.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 if successful. 1 otherwise
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc > 1)
	{
		int i = 1;

		while (i < argc)
		{
			int j = 0;

			while (argv[i][j] != 0)
			{
				if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
			i++;
		}
	}

	printf("%i\n", sum);
	return (0);
}
