/*
 * Program that prints lower case alphabets in reverse.
 * Author: Chidiadi E. Nwosu
 */
#include <stdio.h>

/**
 * main - prints alphabets in reverse using putchar function.
 *
 * Return: 0
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
