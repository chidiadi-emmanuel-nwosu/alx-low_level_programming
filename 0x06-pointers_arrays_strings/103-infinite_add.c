/*
 * File: 103-infinite_add.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, length = 0, n1_len = 0, n2_len = 0, sum = 0, carry = 0;
	int j, num1, num2;

	while (n1[n1_len] != '\0')
		n1_len++;
	while (n2[n2_len] != '\0')
		n2_len++;
	if (n1_len > n2_len)
		length = n1_len;
	else
		length = n2_len;
	while (1)
	{
		if (length <= 0 && carry == 0)
			break;
		if ((n1_len - 1) < 0)
			num1 = 0;
		else
			num1 = n1[n1_len - 1] - '0';
		if ((n2_len - 1) < 0)
			num2 = 0;
		else
			num2 = n2[n2_len - 1] - '0';
		sum = num1 + num2 + carry;
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		if ((i + 1) >= size_r)
			return (0);
		i++, n1_len--, n2_len--, length--;
	}
	r[i] = '\0';
	for (j = 0; j < (i / 2); j++)
	{
		int tmp = r[j];

		r[j] = r[i - 1 - j];
		r[i - 1 - j] = tmp;
	}
	return (r);
}
