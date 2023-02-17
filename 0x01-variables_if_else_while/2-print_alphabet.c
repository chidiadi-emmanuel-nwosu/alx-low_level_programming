/*
 *program that prints the alphabet in lowercase
 *Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - uses putchar to print alphabets in lower case.
 *
 * Return: o
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
