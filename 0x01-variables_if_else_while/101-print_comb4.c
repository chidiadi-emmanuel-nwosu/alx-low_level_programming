/*
 * File: 101-print_comb4.c
 * Author: Chidiadi E. Nwosu
 */
#include <stdio.h>

/**
 * main - program that prints all possible different combinations
 * of three digits.
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
			int k = 48;

			while (k < 58)
			{
				if (!(i >= j || j >= k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
