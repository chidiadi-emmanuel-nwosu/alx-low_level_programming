/*
 * File: 100-print_comb3.c
 * Author: Chidiadi E. Nwosu
 */
#include <stdio.h>

/**
 * main - program that prints all possible different combinations
 * of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = 48;

		while (j < 58)
		{
			if (!(i == j || i > j))
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
