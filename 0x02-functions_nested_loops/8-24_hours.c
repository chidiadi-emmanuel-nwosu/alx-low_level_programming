/*
 * File: 8-24_hours.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
char a = '0';

while (a <= '2')
{
	char b = '0';

	while (b <= '9')
	{
		char c = '0';

		while (c <= '5')
		{
			char d = '0';

			while (d <= '9')
			{
				if (a == '2' && b >= '4')
					break;
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				_putchar('\n');
				d++;
			}
			c++;
		}
		b++;
	}
	a++;
}
}
