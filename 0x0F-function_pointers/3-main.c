/*
 * File: 3-main.c
 * Author: Chidiadi E. Nwosu
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs operations on two input numbers
 * @num1: first number input
 * @num2: second number input
 * @op: operator
 *
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	int num1, num2, ans;

	if (ac != 4)
	{
		printf("Error\n");
		exit(1);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	
	if ((*av[2] == '/' || *av[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	ans = get_op_func(av[2])(num1, num2);

	if (ans)
	{
		printf("Error\n");
		exit(3);
	}	
	
	printf("%i\n", ans);
	
	return (0);
}
