/*
 * File: 9-print_comb.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints all possible combination of single digits
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
