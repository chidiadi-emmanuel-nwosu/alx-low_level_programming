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
int a = 0;

while (a <= 9)
{
	int b = 0;

	while (b <= 9)
	{
		int c = 0;

		while (c <= 9)
		{
			int d = 0;

			while (d <= 9)
			{
				int num1 = a * 10 + b % 10;
				int num2 = c * 10 + d % 10;
				if (num1 < num2)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
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
