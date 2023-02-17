/*
 * Program that prints all single digit numbers starting from 0 in base 10.
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints single digits with putchar function.
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
