/*
 * File: 102-print_comb5.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 (success)
 */
int main(void)
{
int a = 48;

while (a < 58)
{
	int b = 48;

	while (b < 58)
	{
		int c = 48;

		while (c < 58)
		{
			int d = 48;

			while (d < 58)
			{
				if (!(b >= d || a > c))
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57 && b == 56 && c == 57 && d == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				d++;
			}
			c++;
		}
		b++;
	}
	a++;
}
putchar('\n');

return (0);
}
