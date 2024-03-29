/*
 * File: 3-main.c
 * Author: Chidiadi E. Nwosu
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs operations on two input numbers
 * @ac: number of command line arguments
 * @av: array of command line arguments
 *
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	int num1, num2;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(av[2]) || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	if ((*av[2] == '/' || *av[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(av[2])(num1, num2));

	return (0);
}
