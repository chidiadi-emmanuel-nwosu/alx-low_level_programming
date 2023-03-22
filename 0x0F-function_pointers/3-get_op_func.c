/*
 * File: 3-get_op_func.c
 * Author: Chidiadi E. Nwosu
 */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the the correct function to perform
 *               the operation asked by the user.
 * @s: operator passed as argument to the program
 *
 * Return: result of the operation of num1 and num2.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
