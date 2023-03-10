/*
 * File: 3-mul.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 if successful. 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%i\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
