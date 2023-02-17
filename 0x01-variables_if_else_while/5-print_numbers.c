/*
 * Program that prints all single digit numbers of base 10 starting from 0.
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints all single digits from 0.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
