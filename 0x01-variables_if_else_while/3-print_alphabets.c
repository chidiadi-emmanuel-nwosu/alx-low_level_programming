/*
 * program that prints the alphabet in lowercase, and then in uppercase.
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints alphabets in lower and upper case using putchar.
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
